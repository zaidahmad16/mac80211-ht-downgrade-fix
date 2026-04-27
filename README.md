
# mac80211-htfix
(PLEASE NOTE THAT YOU HAVE TO DISABLE SECURE BOOT FOR THE PATCH TO WORK)
A DKMS patch that fixes WiFi speeds dropping to **54 Mbps** on Linux when
connected to certain ISP-provided routers — even though your hardware is
capable of much faster speeds.

## The problem

Some ISP gateways (Comcast/Xfinity XB10, Rogers XB10) have a bug in their
beacon broadcasts: they advertise an **HT Operation basic MCS set** that
lists optional MCS rates (indices 33–76) that virtually no consumer WiFi
card actually supports.

Linux's `mac80211` takes this advertisement at face value, decides the card
can't meet the router's requirements, and silently falls back to **legacy
54 Mbps mode** — the same speed as 2003-era 802.11g. Your card and router
are both perfectly capable of modern speeds; they just can't agree because
of the router's broken beacon.

## The fix

One line of C in `mlme.c`. The check that causes the downgrade is already
skipped for VHT connections on non-strict hardware — this patch applies the
same logic to HT connections:

```c
if (!ieee80211_hw_check(&sdata->local->hw, STRICT))
    return true;
```

Most consumer adapters (including the Intel AX200) are non-strict, so they
now ignore the bogus MCS advertisement and negotiate speeds based on their
actual capabilities.

## Results

| | Speed |
|---|---|
| Before patch | 54 Mbps (legacy 802.11g fallback) |
| After patch | 864 Mbps (Wi-Fi 6 / HE, 80 MHz, 2×2) |

Tested on Ubuntu 24.04, kernel 6.17.0-22-generic, Intel AX200 connected to
a Rogers XB10 gateway.

## Install

This is packaged as a DKMS module, so it rebuilds automatically whenever
you update your kernel.

```bash
sudo cp -r . /usr/src/mac80211-htfix-1.0
sudo dkms add mac80211-htfix/1.0
sudo dkms build mac80211-htfix/1.0
sudo dkms install mac80211-htfix/1.0
sudo modprobe -r mac80211 && sudo modprobe mac80211
```

After the last command your WiFi will reconnect at full speed — no reboot
needed.

## Files

| File | What it is |
|---|---|
| `0001-mac80211-bypass-HT-MCS-check-for-non-strict-hardware.patch` | The patch itself |
| `dkms.conf` | Tells DKMS how to build and install the module |
| `mlme.c` + other sources | Patched mac80211 source (kernel 6.17) |
