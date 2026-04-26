# mac80211-htfix

A DKMS module and patch for Linux `mac80211` that fixes HT/VHT/HE speed
downgrade caused by routers with broken beacon advertisements.

## Problem

Some consumer gateways (Comcast/Xfinity XB10, Rogers XB10) advertise a
bogus **HT Operation basic MCS set** in their beacons that requires optional
unequal-modulation MCS indices (33–76). Most 2×2 WiFi cards cannot satisfy
these, so `ieee80211_verify_sta_ht_mcs_support()` returns false and mac80211
falls back to **54 Mbps legacy mode** even though the router and card both
support HT/VHT/HE.

## Fix

The patch adds an early return in `ieee80211_verify_sta_ht_mcs_support()` for
hardware that does not set the `STRICT` flag (which is most consumer adapters,
including Intel AX200). This mirrors what the VHT path already does.

```c
if (!ieee80211_hw_check(&sdata->local->hw, STRICT))
    return true;
```

## Result

| Before patch | After patch |
|---|---|
| 54 Mbps (legacy) | 864 Mbps (HE 80 MHz 2×2) |

Tested on Ubuntu 24.04, kernel 6.17.0-22-generic, Intel AX200 against a
Rogers XB10 gateway.

## Install (DKMS)

```bash
sudo cp -r . /usr/src/mac80211-htfix-1.0
sudo dkms add mac80211-htfix/1.0
sudo dkms build mac80211-htfix/1.0
sudo dkms install mac80211-htfix/1.0
sudo modprobe -r mac80211 && sudo modprobe mac80211
```

The `AUTOINSTALL="yes"` in `dkms.conf` will rebuild automatically on future
kernel updates.

## Files

- `0001-mac80211-bypass-HT-MCS-check-for-non-strict-hardware.patch` — the patch
- `dkms.conf` — DKMS build configuration
- All other `.c`/`.h` files — patched mac80211 source (kernel 6.17)
