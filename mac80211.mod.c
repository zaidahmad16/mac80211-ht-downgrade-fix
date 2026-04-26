#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(ieee80211_emulate_add_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_emulate_remove_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_emulate_change_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_emulate_switch_vif_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_restart_hw, "", "");
KSYMTAB_FUNC(ieee80211_alloc_hw_nm, "", "");
KSYMTAB_FUNC(ieee80211_register_hw, "", "");
KSYMTAB_FUNC(ieee80211_unregister_hw, "", "");
KSYMTAB_FUNC(ieee80211_free_hw, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_skb, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_ext, "", "");
KSYMTAB_FUNC(ieee80211_tx_rate_update, "", "");
KSYMTAB_FUNC(ieee80211_report_low_ack, "", "");
KSYMTAB_FUNC(ieee80211_free_txskb, "", "");
KSYMTAB_FUNC(ieee80211_purge_tx_queue, "", "");
KSYMTAB_FUNC(ieee80211_find_sta_by_link_addrs, "_gpl", "");
KSYMTAB_FUNC(ieee80211_find_sta_by_ifaddr, "_gpl", "");
KSYMTAB_FUNC(ieee80211_find_sta, "", "");
KSYMTAB_FUNC(ieee80211_sta_block_awake, "", "");
KSYMTAB_FUNC(ieee80211_sta_eosp, "", "");
KSYMTAB_FUNC(ieee80211_send_eosp_nullfunc, "", "");
KSYMTAB_FUNC(ieee80211_sta_set_buffered, "", "");
KSYMTAB_FUNC(ieee80211_sta_register_airtime, "", "");
KSYMTAB_FUNC(ieee80211_sta_recalc_aggregates, "", "");
KSYMTAB_FUNC(ieee80211_scan_completed, "", "");
KSYMTAB_FUNC(ieee80211_sched_scan_results, "", "");
KSYMTAB_FUNC(ieee80211_sched_scan_stopped, "", "");
KSYMTAB_FUNC(ieee80211_ready_on_channel, "_gpl", "");
KSYMTAB_FUNC(ieee80211_remain_on_channel_expired, "_gpl", "");
KSYMTAB_FUNC(ieee80211_request_smps, "_gpl", "");
KSYMTAB_FUNC(ieee80211_send_bar, "", "");
KSYMTAB_FUNC(ieee80211_refresh_tx_agg_session_timer, "", "");
KSYMTAB_FUNC(ieee80211_start_tx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_start_tx_ba_cb_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_stop_tx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_stop_tx_ba_cb_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_stop_rx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_manage_rx_ba_offl, "", "");
KSYMTAB_FUNC(ieee80211_rx_ba_timer_expired, "", "");
KSYMTAB_FUNC(ieee80211_update_mu_groups, "_gpl", "");
KSYMTAB_FUNC(ieee80211_prepare_rx_omi_bw, "_gpl", "");
KSYMTAB_FUNC(ieee80211_finalize_rx_omi_bw, "_gpl", "");
KSYMTAB_FUNC(ieee80211_set_active_links, "_gpl", "");
KSYMTAB_FUNC(ieee80211_set_active_links_async, "_gpl", "");
KSYMTAB_FUNC(ieee80211_rate_control_register, "", "");
KSYMTAB_FUNC(ieee80211_rate_control_unregister, "", "");
KSYMTAB_FUNC(ieee80211_get_tx_rates, "", "");
KSYMTAB_FUNC(rate_control_set_rates, "", "");
KSYMTAB_FUNC(ieee80211_tkip_add_iv, "_gpl", "");
KSYMTAB_FUNC(ieee80211_get_tkip_p1k_iv, "", "");
KSYMTAB_FUNC(ieee80211_get_tkip_rx_p1k, "", "");
KSYMTAB_FUNC(ieee80211_get_tkip_p2k, "", "");
KSYMTAB_FUNC(ieee80211_csa_finish, "", "");
KSYMTAB_FUNC(ieee80211_channel_switch_disconnect, "", "");
KSYMTAB_FUNC(ieee80211_nan_func_terminated, "", "");
KSYMTAB_FUNC(ieee80211_nan_func_match, "", "");
KSYMTAB_FUNC(ieee80211_color_change_finish, "_gpl", "");
KSYMTAB_FUNC(ieee80211_obss_color_collision_notify, "_gpl", "");
KSYMTAB_FUNC(ieee80211_sta_ps_transition, "", "");
KSYMTAB_FUNC(ieee80211_sta_pspoll, "", "");
KSYMTAB_FUNC(ieee80211_sta_uapsd_trigger, "", "");
KSYMTAB_FUNC(ieee80211_mark_rx_ba_filtered_frames, "", "");
KSYMTAB_FUNC(ieee80211_rx_list, "", "");
KSYMTAB_FUNC(ieee80211_rx_napi, "", "");
KSYMTAB_FUNC(ieee80211_rx_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_tx_prepare_skb, "", "");
KSYMTAB_FUNC(ieee80211_tx_dequeue, "", "");
KSYMTAB_FUNC(ieee80211_next_txq, "", "");
KSYMTAB_FUNC(__ieee80211_schedule_txq, "", "");
KSYMTAB_FUNC(ieee80211_txq_airtime_check, "", "");
KSYMTAB_FUNC(ieee80211_txq_may_transmit, "", "");
KSYMTAB_FUNC(ieee80211_txq_schedule_start, "", "");
KSYMTAB_FUNC(ieee80211_beacon_update_cntdwn, "", "");
KSYMTAB_FUNC(ieee80211_beacon_set_cntdwn, "", "");
KSYMTAB_FUNC(ieee80211_beacon_cntdwn_is_complete, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template_ema_index, "", "");
KSYMTAB_FUNC(ieee80211_beacon_free_ema_list, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template_ema_list, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_tim, "", "");
KSYMTAB_FUNC(ieee80211_proberesp_get, "", "");
KSYMTAB_FUNC(ieee80211_get_fils_discovery_tmpl, "", "");
KSYMTAB_FUNC(ieee80211_get_unsol_bcast_probe_resp_tmpl, "", "");
KSYMTAB_FUNC(ieee80211_pspoll_get, "", "");
KSYMTAB_FUNC(ieee80211_nullfunc_get, "", "");
KSYMTAB_FUNC(ieee80211_probereq_get, "", "");
KSYMTAB_FUNC(ieee80211_rts_get, "", "");
KSYMTAB_FUNC(ieee80211_ctstoself_get, "", "");
KSYMTAB_FUNC(ieee80211_get_buffered_bc, "", "");
KSYMTAB_FUNC(ieee80211_reserve_tid, "", "");
KSYMTAB_FUNC(ieee80211_unreserve_tid, "", "");
KSYMTAB_FUNC(ieee80211_iter_keys, "", "");
KSYMTAB_FUNC(ieee80211_iter_keys_rcu, "", "");
KSYMTAB_FUNC(ieee80211_gtk_rekey_notify, "_gpl", "");
KSYMTAB_FUNC(ieee80211_get_key_rx_seq, "", "");
KSYMTAB_FUNC(ieee80211_set_key_rx_seq, "_gpl", "");
KSYMTAB_FUNC(ieee80211_gtk_rekey_add, "_gpl", "");
KSYMTAB_FUNC(ieee80211_key_mic_failure, "_gpl", "");
KSYMTAB_FUNC(ieee80211_key_replay, "_gpl", "");
KSYMTAB_FUNC(wiphy_to_ieee80211_hw, "", "");
KSYMTAB_FUNC(ieee80211_get_bssid, "", "");
KSYMTAB_FUNC(ieee80211_generic_frame_duration, "", "");
KSYMTAB_FUNC(ieee80211_rts_duration, "", "");
KSYMTAB_FUNC(ieee80211_ctstoself_duration, "", "");
KSYMTAB_FUNC(ieee80211_handle_wake_tx_queue, "", "");
KSYMTAB_FUNC(ieee80211_wake_queue, "", "");
KSYMTAB_FUNC(ieee80211_stop_queue, "", "");
KSYMTAB_FUNC(ieee80211_stop_queues, "", "");
KSYMTAB_FUNC(ieee80211_queue_stopped, "", "");
KSYMTAB_FUNC(ieee80211_wake_queues, "", "");
KSYMTAB_FUNC(ieee80211_iterate_interfaces, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_active_interfaces_atomic, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_active_interfaces_mtx, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_stations_atomic, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_stations_mtx, "_gpl", "");
KSYMTAB_FUNC(wdev_to_ieee80211_vif, "_gpl", "");
KSYMTAB_FUNC(ieee80211_vif_to_wdev, "_gpl", "");
KSYMTAB_FUNC(ieee80211_queue_work, "", "");
KSYMTAB_FUNC(ieee80211_queue_delayed_work, "", "");
KSYMTAB_FUNC(ieee80211_hw_restart_disconnect, "_gpl", "");
KSYMTAB_FUNC(ieee80211_resume_disconnect, "_gpl", "");
KSYMTAB_FUNC(ieee80211_ave_rssi, "_gpl", "");
KSYMTAB_FUNC(ieee80211_radar_detected, "", "");
KSYMTAB_FUNC(ieee80211_update_p2p_noa, "", "");
KSYMTAB_FUNC(ieee80211_parse_p2p_noa, "", "");
KSYMTAB_FUNC(ieee80211_txq_get_depth, "", "");
KSYMTAB_FUNC(ieee80211_iter_chan_contexts_atomic, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iter_chan_contexts_mtx, "_gpl", "");
KSYMTAB_FUNC(ieee80211_chswitch_done, "", "");
KSYMTAB_FUNC(ieee80211_ap_probereq_get, "", "");
KSYMTAB_FUNC(ieee80211_beacon_loss, "", "");
KSYMTAB_FUNC(ieee80211_connection_loss, "", "");
KSYMTAB_FUNC(ieee80211_disconnect, "", "");
KSYMTAB_FUNC(ieee80211_send_teardown_neg_ttlm, "", "");
KSYMTAB_FUNC(ieee80211_cqm_rssi_notify, "", "");
KSYMTAB_FUNC(ieee80211_cqm_beacon_loss_notify, "", "");
KSYMTAB_FUNC(ieee80211_enable_rssi_reports, "", "");
KSYMTAB_FUNC(ieee80211_disable_rssi_reports, "", "");
KSYMTAB_FUNC(ieee80211_tdls_oper_request, "", "");
KSYMTAB_FUNC(ieee80211_calc_rx_airtime, "_gpl", "");
KSYMTAB_FUNC(ieee80211_calc_tx_airtime, "_gpl", "");
KSYMTAB_FUNC(__ieee80211_get_radio_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_assoc_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_tx_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_rx_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_create_tpt_led_trigger, "", "");
KSYMTAB_FUNC(ieee80211_report_wowlan_wakeup, "", "");

SYMBOL_CRC(ieee80211_emulate_add_chanctx, 0x23eebe49, "");
SYMBOL_CRC(ieee80211_emulate_remove_chanctx, 0x75476c5d, "");
SYMBOL_CRC(ieee80211_emulate_change_chanctx, 0x0356ab9f, "");
SYMBOL_CRC(ieee80211_emulate_switch_vif_chanctx, 0x423ca84d, "");
SYMBOL_CRC(ieee80211_restart_hw, 0x77d46506, "");
SYMBOL_CRC(ieee80211_alloc_hw_nm, 0xf64a4a06, "");
SYMBOL_CRC(ieee80211_register_hw, 0x5026a016, "");
SYMBOL_CRC(ieee80211_unregister_hw, 0x77d46506, "");
SYMBOL_CRC(ieee80211_free_hw, 0x77d46506, "");
SYMBOL_CRC(ieee80211_tx_status_irqsafe, 0x1353610b, "");
SYMBOL_CRC(ieee80211_tx_status_skb, 0x1353610b, "");
SYMBOL_CRC(ieee80211_tx_status_ext, 0xa2b31194, "");
SYMBOL_CRC(ieee80211_tx_rate_update, 0xee06f11b, "");
SYMBOL_CRC(ieee80211_report_low_ack, 0x0593c87c, "");
SYMBOL_CRC(ieee80211_free_txskb, 0x1353610b, "");
SYMBOL_CRC(ieee80211_purge_tx_queue, 0x7f8eeb72, "");
SYMBOL_CRC(ieee80211_find_sta_by_link_addrs, 0xdb80e325, "_gpl");
SYMBOL_CRC(ieee80211_find_sta_by_ifaddr, 0x4adea634, "_gpl");
SYMBOL_CRC(ieee80211_find_sta, 0x3d196f15, "");
SYMBOL_CRC(ieee80211_sta_block_awake, 0xd538b8a6, "");
SYMBOL_CRC(ieee80211_sta_eosp, 0xa6883da5, "");
SYMBOL_CRC(ieee80211_send_eosp_nullfunc, 0x0714ece3, "");
SYMBOL_CRC(ieee80211_sta_set_buffered, 0x45f4e786, "");
SYMBOL_CRC(ieee80211_sta_register_airtime, 0x67c8fab1, "");
SYMBOL_CRC(ieee80211_sta_recalc_aggregates, 0xa6883da5, "");
SYMBOL_CRC(ieee80211_scan_completed, 0x7902070a, "");
SYMBOL_CRC(ieee80211_sched_scan_results, 0xb8769e9c, "");
SYMBOL_CRC(ieee80211_sched_scan_stopped, 0xb8769e9c, "");
SYMBOL_CRC(ieee80211_ready_on_channel, 0xb1134e6b, "_gpl");
SYMBOL_CRC(ieee80211_remain_on_channel_expired, 0xb1134e6b, "_gpl");
SYMBOL_CRC(ieee80211_request_smps, 0x98b9b356, "_gpl");
SYMBOL_CRC(ieee80211_send_bar, 0xd81e6f0e, "");
SYMBOL_CRC(ieee80211_refresh_tx_agg_session_timer, 0x305d24fc, "");
SYMBOL_CRC(ieee80211_start_tx_ba_session, 0xe49f5265, "");
SYMBOL_CRC(ieee80211_start_tx_ba_cb_irqsafe, 0x8e05644d, "");
SYMBOL_CRC(ieee80211_stop_tx_ba_session, 0x53f1e57d, "");
SYMBOL_CRC(ieee80211_stop_tx_ba_cb_irqsafe, 0x8e05644d, "");
SYMBOL_CRC(ieee80211_stop_rx_ba_session, 0x71982792, "");
SYMBOL_CRC(ieee80211_manage_rx_ba_offl, 0x5f064c24, "");
SYMBOL_CRC(ieee80211_rx_ba_timer_expired, 0x5f064c24, "");
SYMBOL_CRC(ieee80211_update_mu_groups, 0x5f46f2f3, "_gpl");
SYMBOL_CRC(ieee80211_prepare_rx_omi_bw, 0x9a5ad9be, "_gpl");
SYMBOL_CRC(ieee80211_finalize_rx_omi_bw, 0x6d7373d9, "_gpl");
SYMBOL_CRC(ieee80211_set_active_links, 0x565c3d54, "_gpl");
SYMBOL_CRC(ieee80211_set_active_links_async, 0xc916f855, "_gpl");
SYMBOL_CRC(ieee80211_rate_control_register, 0x52977f06, "");
SYMBOL_CRC(ieee80211_rate_control_unregister, 0x67c343a4, "");
SYMBOL_CRC(ieee80211_get_tx_rates, 0xadf785d8, "");
SYMBOL_CRC(rate_control_set_rates, 0xebd2bb06, "");
SYMBOL_CRC(ieee80211_tkip_add_iv, 0xe1dd87bf, "_gpl");
SYMBOL_CRC(ieee80211_get_tkip_p1k_iv, 0xaef115c6, "");
SYMBOL_CRC(ieee80211_get_tkip_rx_p1k, 0xefd5e432, "");
SYMBOL_CRC(ieee80211_get_tkip_p2k, 0xf4b9547a, "");
SYMBOL_CRC(ieee80211_csa_finish, 0x6b7a2902, "");
SYMBOL_CRC(ieee80211_channel_switch_disconnect, 0xabe43224, "");
SYMBOL_CRC(ieee80211_nan_func_terminated, 0xbd344848, "");
SYMBOL_CRC(ieee80211_nan_func_match, 0xefb38c46, "");
SYMBOL_CRC(ieee80211_color_change_finish, 0xa2468c94, "_gpl");
SYMBOL_CRC(ieee80211_obss_color_collision_notify, 0xebdf5dbd, "_gpl");
SYMBOL_CRC(ieee80211_sta_ps_transition, 0xda55d3ca, "");
SYMBOL_CRC(ieee80211_sta_pspoll, 0xa6883da5, "");
SYMBOL_CRC(ieee80211_sta_uapsd_trigger, 0xa39d2b20, "");
SYMBOL_CRC(ieee80211_mark_rx_ba_filtered_frames, 0xc3e6185f, "");
SYMBOL_CRC(ieee80211_rx_list, 0xafc722a4, "");
SYMBOL_CRC(ieee80211_rx_napi, 0x8a233306, "");
SYMBOL_CRC(ieee80211_rx_irqsafe, 0x1353610b, "");
SYMBOL_CRC(ieee80211_tx_prepare_skb, 0x74a78d2d, "");
SYMBOL_CRC(ieee80211_tx_dequeue, 0xac7a2aff, "");
SYMBOL_CRC(ieee80211_next_txq, 0xe025fe7c, "");
SYMBOL_CRC(__ieee80211_schedule_txq, 0xaf151173, "");
SYMBOL_CRC(ieee80211_txq_airtime_check, 0xce2ae395, "");
SYMBOL_CRC(ieee80211_txq_may_transmit, 0xce2ae395, "");
SYMBOL_CRC(ieee80211_txq_schedule_start, 0x35732f07, "");
SYMBOL_CRC(ieee80211_beacon_update_cntdwn, 0xbc97a6b6, "");
SYMBOL_CRC(ieee80211_beacon_set_cntdwn, 0xfc2ce886, "");
SYMBOL_CRC(ieee80211_beacon_cntdwn_is_complete, 0xceafac83, "");
SYMBOL_CRC(ieee80211_beacon_get_template, 0xfbf32154, "");
SYMBOL_CRC(ieee80211_beacon_get_template_ema_index, 0x55a69003, "");
SYMBOL_CRC(ieee80211_beacon_free_ema_list, 0x2b9707a1, "");
SYMBOL_CRC(ieee80211_beacon_get_template_ema_list, 0xfe6d7359, "");
SYMBOL_CRC(ieee80211_beacon_get_tim, 0xdc0eea28, "");
SYMBOL_CRC(ieee80211_proberesp_get, 0xbb3d94e4, "");
SYMBOL_CRC(ieee80211_get_fils_discovery_tmpl, 0xbb3d94e4, "");
SYMBOL_CRC(ieee80211_get_unsol_bcast_probe_resp_tmpl, 0xbb3d94e4, "");
SYMBOL_CRC(ieee80211_pspoll_get, 0xbb3d94e4, "");
SYMBOL_CRC(ieee80211_nullfunc_get, 0x06ec656b, "");
SYMBOL_CRC(ieee80211_probereq_get, 0xfb2c86b3, "");
SYMBOL_CRC(ieee80211_rts_get, 0x78d00c71, "");
SYMBOL_CRC(ieee80211_ctstoself_get, 0x54d2b679, "");
SYMBOL_CRC(ieee80211_get_buffered_bc, 0xbb3d94e4, "");
SYMBOL_CRC(ieee80211_reserve_tid, 0xcdf7088f, "");
SYMBOL_CRC(ieee80211_unreserve_tid, 0xba634f41, "");
SYMBOL_CRC(ieee80211_iter_keys, 0xa7ea41a0, "");
SYMBOL_CRC(ieee80211_iter_keys_rcu, 0xa7ea41a0, "");
SYMBOL_CRC(ieee80211_gtk_rekey_notify, 0x52e2c0cc, "_gpl");
SYMBOL_CRC(ieee80211_get_key_rx_seq, 0xf5f9c32b, "");
SYMBOL_CRC(ieee80211_set_key_rx_seq, 0xf5f9c32b, "_gpl");
SYMBOL_CRC(ieee80211_gtk_rekey_add, 0x06dd4cfa, "_gpl");
SYMBOL_CRC(ieee80211_key_mic_failure, 0x6f909b48, "_gpl");
SYMBOL_CRC(ieee80211_key_replay, 0x6f909b48, "_gpl");
SYMBOL_CRC(wiphy_to_ieee80211_hw, 0x53156014, "");
SYMBOL_CRC(ieee80211_get_bssid, 0x46ff2de2, "");
SYMBOL_CRC(ieee80211_generic_frame_duration, 0xa18a37c8, "");
SYMBOL_CRC(ieee80211_rts_duration, 0xc429798b, "");
SYMBOL_CRC(ieee80211_ctstoself_duration, 0xc429798b, "");
SYMBOL_CRC(ieee80211_handle_wake_tx_queue, 0xbaa82784, "");
SYMBOL_CRC(ieee80211_wake_queue, 0xee9425e8, "");
SYMBOL_CRC(ieee80211_stop_queue, 0xee9425e8, "");
SYMBOL_CRC(ieee80211_stop_queues, 0x8aaa7aeb, "");
SYMBOL_CRC(ieee80211_queue_stopped, 0xab5e000d, "");
SYMBOL_CRC(ieee80211_wake_queues, 0x8aaa7aeb, "");
SYMBOL_CRC(ieee80211_iterate_interfaces, 0xeb61e3e7, "_gpl");
SYMBOL_CRC(ieee80211_iterate_active_interfaces_atomic, 0xeb61e3e7, "_gpl");
SYMBOL_CRC(ieee80211_iterate_active_interfaces_mtx, 0xeb61e3e7, "_gpl");
SYMBOL_CRC(ieee80211_iterate_stations_atomic, 0x97d5d588, "_gpl");
SYMBOL_CRC(ieee80211_iterate_stations_mtx, 0x97d5d588, "_gpl");
SYMBOL_CRC(wdev_to_ieee80211_vif, 0x03df8be0, "_gpl");
SYMBOL_CRC(ieee80211_vif_to_wdev, 0x0902e0ad, "_gpl");
SYMBOL_CRC(ieee80211_queue_work, 0x74c132e0, "");
SYMBOL_CRC(ieee80211_queue_delayed_work, 0x5e04fa26, "");
SYMBOL_CRC(ieee80211_hw_restart_disconnect, 0x18c29b72, "_gpl");
SYMBOL_CRC(ieee80211_resume_disconnect, 0x18c29b72, "_gpl");
SYMBOL_CRC(ieee80211_ave_rssi, 0x3da713a7, "_gpl");
SYMBOL_CRC(ieee80211_radar_detected, 0xf5684c04, "");
SYMBOL_CRC(ieee80211_update_p2p_noa, 0xe69d6598, "");
SYMBOL_CRC(ieee80211_parse_p2p_noa, 0xd42a10ba, "");
SYMBOL_CRC(ieee80211_txq_get_depth, 0xdad47af9, "");
SYMBOL_CRC(ieee80211_iter_chan_contexts_atomic, 0xd2bf176d, "_gpl");
SYMBOL_CRC(ieee80211_iter_chan_contexts_mtx, 0xd2bf176d, "_gpl");
SYMBOL_CRC(ieee80211_chswitch_done, 0x20262d83, "");
SYMBOL_CRC(ieee80211_ap_probereq_get, 0x8aeb5d97, "");
SYMBOL_CRC(ieee80211_beacon_loss, 0xabe43224, "");
SYMBOL_CRC(ieee80211_connection_loss, 0xabe43224, "");
SYMBOL_CRC(ieee80211_disconnect, 0x38cb053c, "");
SYMBOL_CRC(ieee80211_send_teardown_neg_ttlm, 0xabe43224, "");
SYMBOL_CRC(ieee80211_cqm_rssi_notify, 0x3c84bdc8, "");
SYMBOL_CRC(ieee80211_cqm_beacon_loss_notify, 0xde7a8e8b, "");
SYMBOL_CRC(ieee80211_enable_rssi_reports, 0x732e21fa, "");
SYMBOL_CRC(ieee80211_disable_rssi_reports, 0xabe43224, "");
SYMBOL_CRC(ieee80211_tdls_oper_request, 0x17adb7ba, "");
SYMBOL_CRC(ieee80211_calc_rx_airtime, 0xb69feaa6, "_gpl");
SYMBOL_CRC(ieee80211_calc_tx_airtime, 0x54830262, "_gpl");
SYMBOL_CRC(__ieee80211_get_radio_led_name, 0x34315dda, "");
SYMBOL_CRC(__ieee80211_get_assoc_led_name, 0x34315dda, "");
SYMBOL_CRC(__ieee80211_get_tx_led_name, 0x34315dda, "");
SYMBOL_CRC(__ieee80211_get_rx_led_name, 0x34315dda, "");
SYMBOL_CRC(__ieee80211_create_tpt_led_trigger, 0xee5b6720, "");
SYMBOL_CRC(ieee80211_report_wowlan_wakeup, 0x484de76f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x236a2cc3, "crypto_skcipher_encrypt" },
	{ 0x2795c1e6, "cfg80211_inform_bss_frame_data" },
	{ 0xab931ceb, "cfg80211_sched_scan_results" },
	{ 0xfb958835, "wiphy_locked_debugfs_read" },
	{ 0xfbc77297, "cfg80211_sinfo_alloc_tid_stats" },
	{ 0x71094483, "skb_complete_wifi_ack" },
	{ 0xd21a08c4, "__hw_addr_init" },
	{ 0x5160854e, "vscnprintf" },
	{ 0xbd243a00, "cfg80211_mgmt_tx_status_ext" },
	{ 0xffefa408, "cfg80211_rx_assoc_resp" },
	{ 0x21feb186, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0xd272d446, "rtnl_unlock" },
	{ 0x463cbdff, "arc4_setkey" },
	{ 0x5bdf561d, "bpf_trace_run4" },
	{ 0x7cd33e49, "__rht_bucket_nested" },
	{ 0x7a70e1b6, "skb_copy_bits" },
	{ 0xfe5422fa, "hrtimer_setup" },
	{ 0x5244a5dc, "idr_find" },
	{ 0x639765f4, "cfg80211_merge_profile" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x87b843e0, "eth_mac_addr" },
	{ 0x18d43ede, "skb_put" },
	{ 0x616b34f9, "cfg80211_links_removed" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xc828c23a, "cfg80211_chandef_dfs_required" },
	{ 0x9d2ac898, "static_key_slow_inc" },
	{ 0x1f6beaf4, "cfg80211_scan_done" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x0661d50c, "cfg80211_assoc_comeback" },
	{ 0x7851be11, "rtnl_is_locked" },
	{ 0x747bd2f7, "consume_skb" },
	{ 0x20fe0e51, "csum_partial" },
	{ 0xa53f4e29, "memmove" },
	{ 0xb978e339, "regulatory_pre_cac_allowed" },
	{ 0x40a621c5, "snprintf" },
	{ 0x0fe34880, "skb_clone_sk" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xc327249d, "trace_raw_output_prep" },
	{ 0x8419ab73, "wiphy_work_flush" },
	{ 0xd79eeabc, "netif_receive_skb_list" },
	{ 0x494c552b, "_find_first_bit" },
	{ 0x86fa8d8a, "cfg80211_bss_color_notify" },
	{ 0xd272d446, "__SCT__preempt_schedule" },
	{ 0x19268c9c, "cfg80211_remain_on_channel_expired" },
	{ 0x9cc447bd, "bpf_trace_run6" },
	{ 0xf0324b79, "cfg80211_cac_event" },
	{ 0xf35915f4, "debugfs_create_symlink" },
	{ 0x74f8d140, "skb_dequeue" },
	{ 0x47e663dd, "__trace_trigger_soft_disabled" },
	{ 0x4dcc39b1, "cfg80211_register_netdevice" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0x0ded3c3f, "trace_event_printf" },
	{ 0xa39ffaf2, "led_trigger_blink_oneshot" },
	{ 0x40a621c5, "scnprintf" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0x18cc66c8, "cfg80211_is_element_inherited" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0xf803a1ce, "ieee80211_amsdu_to_8023s" },
	{ 0x71ce30b2, "__hw_addr_unsync" },
	{ 0x6e622f16, "cfg80211_wdev_channel_allowed" },
	{ 0x41de7873, "__printk_ratelimit" },
	{ 0xe59c54dc, "cfg80211_ref_bss" },
	{ 0x7647c40c, "ieee80211_mandatory_rates" },
	{ 0x506e75e8, "ieee80211_chandef_to_operating_class" },
	{ 0x494c552b, "_find_first_zero_bit" },
	{ 0x8bc8f40f, "crc32_be" },
	{ 0x57a358d2, "ieee80211_operating_class_to_chandef" },
	{ 0xa666ac19, "dev_alloc_name" },
	{ 0x90660c97, "___pskb_trim" },
	{ 0x76a12bc4, "trace_event_raw_init" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xbd9aacde, "round_jiffies_relative" },
	{ 0x1df26172, "cfg80211_iter_rnr" },
	{ 0x9eb408d0, "wiphy_hrtimer_work_cancel" },
	{ 0xf10582b6, "get_random_u16" },
	{ 0x3d7f79e6, "debugfs_create_file_short" },
	{ 0x66526f72, "sg_init_one" },
	{ 0x2352b148, "timer_delete" },
	{ 0x499ad459, "crypto_alloc_aead" },
	{ 0xda519ead, "bpf_trace_run2" },
	{ 0x8af51ca4, "crypto_aead_setauthsize" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0x8cc65d3d, "crypto_aead_decrypt" },
	{ 0x7851be11, "net_ratelimit" },
	{ 0xc783d29b, "cfg80211_chandef_valid" },
	{ 0xa503e586, "cfg80211_new_sta" },
	{ 0xa9f25797, "crypto_skcipher_setkey" },
	{ 0x37197a78, "vsnprintf" },
	{ 0x187489d1, "wiphy_delayed_work_pending" },
	{ 0x46dfb704, "netdev_set_default_ethtool_ops" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0xa6a33da7, "bitmap_free" },
	{ 0x5ae9ee26, "__per_cpu_offset" },
	{ 0xbe011736, "__dynamic_dev_dbg" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0xb69d5d49, "ether_setup" },
	{ 0xd272d446, "__fentry__" },
	{ 0xf8ad0200, "pskb_expand_head" },
	{ 0x462ecb4a, "static_key_slow_dec" },
	{ 0xbcbea717, "skb_csum_hwoffload_help" },
	{ 0xdb95b487, "skb_queue_purge_reason" },
	{ 0xa117c6c6, "trace_event_buffer_commit" },
	{ 0xa5d4e4fb, "dev_addr_mod" },
	{ 0x46a1b3eb, "cfg80211_calculate_bitrate" },
	{ 0xbd9aacde, "round_jiffies_up" },
	{ 0x026921de, "crypto_destroy_tfm" },
	{ 0xe59bea4d, "eth_type_trans" },
	{ 0x5a844b26, "__x86_indirect_thunk_r11" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x82872ec5, "alloc_netdev_mqs" },
	{ 0x58b11380, "wiphy_new_nm" },
	{ 0xf00d45ac, "kstrtou16" },
	{ 0xe0831e69, "cfg80211_sta_opmode_change_notify" },
	{ 0xe8213e80, "_printk" },
	{ 0x2f8a88bc, "cfg80211_ready_on_channel" },
	{ 0xc0a57383, "cfg80211_reg_check_beaconing" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xff7fbdd1, "___ratelimit" },
	{ 0x4c6ad752, "drop_reasons_unregister_subsys" },
	{ 0xa97ffed0, "skb_checksum_help" },
	{ 0x14aae057, "cfg80211_classify8021d" },
	{ 0x19268c9c, "cfg80211_tx_mgmt_expired" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xfdab0efa, "debugfs_create_x64" },
	{ 0xd79a7a0d, "ieee80211_fragment_element" },
	{ 0x65fb12e0, "cfg80211_rx_mlme_mgmt" },
	{ 0x0b5a3687, "wiphy_delayed_work_queue" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x236a2cc3, "crypto_skcipher_decrypt" },
	{ 0xd710adbf, "__kmalloc_large_noprof" },
	{ 0xb9064440, "wiphy_register" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xfd285498, "unregister_inetaddr_notifier" },
	{ 0x95221fe6, "__alloc_skb" },
	{ 0xe59c54dc, "cfg80211_put_bss" },
	{ 0x561929d4, "cfg80211_nan_func_terminated" },
	{ 0x0e2dbb44, "cfg80211_link_sinfo_alloc_tid_stats" },
	{ 0x0e125918, "cfg80211_ch_switch_notify" },
	{ 0x38c8be28, "idr_get_next" },
	{ 0x9df49997, "cfg80211_tx_mlme_mgmt" },
	{ 0x9b1de7cb, "_dev_info" },
	{ 0x53f8d496, "cfg80211_gtk_rekey_notify" },
	{ 0x8fe0ca7d, "skb_copy_expand" },
	{ 0x236cf4b7, "skb_queue_tail" },
	{ 0x2da7dc62, "ieee80211_get_channel_khz" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x09b7f879, "cfg80211_check_combinations" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x65d3bb15, "__cfg80211_radar_event" },
	{ 0xa5413506, "cfg80211_tdls_oper_request" },
	{ 0x26226372, "cfg80211_find_elem_match" },
	{ 0x9c0551c6, "tasklet_kill" },
	{ 0x07d50c57, "idr_remove" },
	{ 0x2013acfb, "cfg80211_control_port_tx_status" },
	{ 0xa2b16286, "cfg80211_chandef_primary" },
	{ 0x6e1e6e91, "cfg80211_get_drvinfo" },
	{ 0xc5b6d417, "__sw_hweight64" },
	{ 0xc56fbad7, "ieee80211_get_8023_tunnel_proto" },
	{ 0xa41c6561, "crypto_aead_setkey" },
	{ 0xce2a82d8, "__skb_get_hash_net" },
	{ 0x484b7053, "kernel_param_lock" },
	{ 0x1967016c, "wiphy_locked_debugfs_write" },
	{ 0x98aacd62, "perf_trace_buf_alloc" },
	{ 0x21feb186, "cfg80211_rx_spurious_frame" },
	{ 0x30377720, "perf_trace_run_bpf_submit" },
	{ 0x55912ab2, "cfg80211_ibss_joined" },
	{ 0x34ea9a19, "cfg80211_nan_match" },
	{ 0xf0d1e02d, "crypto_shash_setkey" },
	{ 0x6884e085, "cfg80211_chandef_compatible" },
	{ 0x3768e85d, "simple_open" },
	{ 0x18d43ede, "skb_pull" },
	{ 0xd272d446, "synchronize_rcu" },
	{ 0x30212f3b, "cfg80211_iter_combinations" },
	{ 0xb82edfb3, "idr_alloc" },
	{ 0xaef1f20d, "system_freezable_wq" },
	{ 0x37c2f125, "cfg80211_iftype_allowed" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x8cc65d3d, "crypto_aead_encrypt" },
	{ 0xee3afd5d, "sk_skb_reason_drop" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x23ef80fb, "noop_llseek" },
	{ 0x22443267, "ieee80211_is_valid_amsdu" },
	{ 0x95628678, "bpf_trace_run5" },
	{ 0x8db9b6ac, "__usecs_to_jiffies" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xe9d64c0b, "cfg80211_michael_mic_failure" },
	{ 0x74c4a3b8, "cfg80211_cqm_pktloss_notify" },
	{ 0x5b8ebf89, "cfg80211_any_usable_channels" },
	{ 0x2ae9a219, "arc4_crypt" },
	{ 0x014deb21, "dev_close" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0x27687163, "mac_pton" },
	{ 0x8bc8f40f, "crc32_le" },
	{ 0x48a9ac02, "cfg80211_free_nan_func" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x18d43ede, "skb_push" },
	{ 0x4c46394d, "ieee80211_operating_class_to_band" },
	{ 0xe6cb68a5, "kmem_cache_free" },
	{ 0xa612b1b2, "crypto_shash_init" },
	{ 0xc6f5478c, "debugfs_remove" },
	{ 0x2435d559, "strncmp" },
	{ 0x2007366e, "cfg80211_mlo_reconf_add_done" },
	{ 0xa503e586, "cfg80211_del_sta_sinfo" },
	{ 0xa97ffed0, "netif_receive_skb" },
	{ 0x0575a33e, "trace_event_reg" },
	{ 0xc609ff70, "strncpy" },
	{ 0x5735319c, "crypto_shash_digest" },
	{ 0xf8faa012, "kfree_sensitive" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0x248ac936, "skb_ensure_writable" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xf48e39a9, "wiphy_unregister" },
	{ 0x7db71bea, "free_netdev" },
	{ 0xcbc1e051, "__bitmap_subset" },
	{ 0xbd03ed67, "phys_base" },
	{ 0x8419ab73, "wiphy_work_queue" },
	{ 0x3fa68085, "led_trigger_unregister" },
	{ 0x86632fd6, "_find_next_bit" },
	{ 0x30f08ac4, "ieee80211_radiotap_iterator_init" },
	{ 0x2ab056fd, "cfg80211_notify_new_peer_candidate" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x402db74e, "memcmp" },
	{ 0x4644dbe9, "debugfs_change_name" },
	{ 0x4f6317dc, "ieee80211_data_to_8023_exthdr" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x173ec8da, "sscanf" },
	{ 0xbd11acc5, "ethtool_op_get_link" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xe199f25f, "jiffies_to_msecs" },
	{ 0xc9adb44e, "debugfs_create_ulong" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0x91f966bb, "kstrtou8" },
	{ 0x01b2a8ec, "bpf_trace_run1" },
	{ 0x255dfd5a, "idr_destroy" },
	{ 0x23ef80fb, "default_llseek" },
	{ 0x65be4825, "cfg80211_epcs_changed" },
	{ 0x9b55ab84, "nl80211_chan_width_to_mhz" },
	{ 0xad665de6, "cfg80211_schedule_channels_check" },
	{ 0xb5c51982, "__cpu_possible_mask" },
	{ 0xb2a14382, "rhashtable_free_and_destroy" },
	{ 0x7295b8c3, "ieee80211_freq_khz_to_channel" },
	{ 0x484b7053, "kernel_param_unlock" },
	{ 0x8419ab73, "wiphy_work_cancel" },
	{ 0x27683a56, "memset" },
	{ 0x9b1de7cb, "_dev_warn" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0x71798f7e, "wiphy_delayed_work_timer" },
	{ 0x776da765, "wiphy_hrtimer_work_queue" },
	{ 0xbd069841, "kstrtoull" },
	{ 0x4b208175, "cfg80211_chandef_usable" },
	{ 0xb34d1fb3, "bitmap_zalloc" },
	{ 0x6d2f6d40, "rfc1042_header" },
	{ 0xec3d8607, "rht_bucket_nested_insert" },
	{ 0x0ed0b0ad, "wiphy_delayed_work_cancel" },
	{ 0xf3cb510e, "ieee80211_strip_8023_mesh_hdr" },
	{ 0x2352b148, "timer_shutdown_sync" },
	{ 0xaf9e34ab, "kfree_skb_list_reason" },
	{ 0xcb53408f, "cfg80211_cqm_beacon_loss_notify" },
	{ 0x0040afbe, "param_ops_charp" },
	{ 0xbeb1d261, "__flush_workqueue" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xfd285498, "unregister_inet6addr_notifier" },
	{ 0x0df1334a, "debugfs_create_u32" },
	{ 0xd2444fe9, "kmem_cache_alloc_noprof" },
	{ 0x386e4ba3, "kmemdup_noprof" },
	{ 0x29a6752d, "cfg80211_rx_control_port" },
	{ 0xf296206e, "nr_cpu_ids" },
	{ 0xa26a3e58, "__hw_addr_sync" },
	{ 0x4124c2d0, "__pskb_pull_tail" },
	{ 0xa97ffed0, "netif_rx" },
	{ 0x94708fba, "__netdev_alloc_skb" },
	{ 0x6aa3c7c7, "debugfs_create_x16" },
	{ 0xb5ac1c73, "__kmem_cache_create_args" },
	{ 0xf21f32c5, "ieee80211_s1g_channel_width" },
	{ 0x4a2b4431, "__crypto_memneq" },
	{ 0xec203997, "kasprintf" },
	{ 0x2052b3d9, "cfg80211_get_radio_idx_by_chan" },
	{ 0x4badb84a, "drop_reasons_register_subsys" },
	{ 0x888b8f57, "strcmp" },
	{ 0x5c0e69f5, "skb_trim" },
	{ 0x73344baf, "cfg80211_ch_switch_started_notify" },
	{ 0x269eada4, "cfg80211_check_station_change" },
	{ 0xfd285498, "unregister_netdevice_notifier" },
	{ 0x690cdb06, "free_percpu" },
	{ 0x058c185a, "jiffies" },
	{ 0x57458ec3, "nonseekable_open" },
	{ 0xab931ceb, "cfg80211_sched_scan_stopped_locked" },
	{ 0x6f8082dd, "pv_ops" },
	{ 0xd4b08efd, "bpf_trace_run3" },
	{ 0x69f264ce, "rhashtable_insert_slow" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xf3e575f5, "idr_for_each" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0xb9fcd065, "call_rcu" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0x9e87a771, "cfg80211_unregister_wdev" },
	{ 0x70193767, "__dev_queue_xmit" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0xba1bf595, "gro_receive_skb" },
	{ 0x023dc39f, "cfg80211_probe_status" },
	{ 0x7687f56f, "rhltable_init_noprof" },
	{ 0x23e7cd4a, "pcpu_alloc_noprof" },
	{ 0x51f5b978, "freq_reg_info" },
	{ 0x522970b0, "rhashtable_init_noprof" },
	{ 0xc9c82041, "trace_event_buffer_reserve" },
	{ 0xd989b305, "cfg80211_stop_iface" },
	{ 0x36353f73, "ieee80211_radiotap_iterator_next" },
	{ 0xe2bcbfef, "cfg80211_rx_mgmt_ext" },
	{ 0xa5c7582d, "strsep" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x94a00c08, "crypto_shash_finup" },
	{ 0x0040afbe, "param_ops_bool" },
	{ 0x47596da4, "cfg80211_defragment_element" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x0ed0b0ad, "wiphy_delayed_work_flush" },
	{ 0x23f25c0a, "__dynamic_pr_debug" },
	{ 0xfd285498, "register_inet6addr_notifier" },
	{ 0xc064623f, "__kmalloc_cache_noprof" },
	{ 0x97acb853, "ktime_get" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x546c19d9, "validate_usercopy_range" },
	{ 0x75738bed, "__warn_printk" },
	{ 0x0f4c28ea, "netif_carrier_off" },
	{ 0xfd285498, "register_netdevice_notifier" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0xb0e3a978, "ieee80211_channel_to_freq_khz" },
	{ 0xc670e699, "led_trigger_register" },
	{ 0x6ab80e94, "skb_copy" },
	{ 0x3196e54e, "cfg80211_assoc_failure" },
	{ 0x21f84682, "ieee80211_hdrlen" },
	{ 0xfb3bad2b, "skb_clone" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x0f4c28ea, "netif_carrier_on" },
	{ 0xce2de609, "debugfs_create_file_full" },
	{ 0x146ee687, "cfg80211_chandef_create" },
	{ 0xde1257e4, "cfg80211_report_wowlan_wakeup" },
	{ 0xd272d446, "rtnl_lock" },
	{ 0x5f6060c2, "ieee80211_get_mesh_hdrlen" },
	{ 0x1b8bd63b, "__crypto_xor" },
	{ 0xb6bf29fc, "cfg80211_send_layer2_update" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x01411ce7, "acpi_amd_wbrf_add_remove" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0xfaed219f, "cfg80211_get_p2p_attr" },
	{ 0x171098ce, "cfg80211_get_iftype_ext_capa" },
	{ 0x5a844b26, "__x86_indirect_thunk_r12" },
	{ 0xfd285498, "register_inetaddr_notifier" },
	{ 0x7a6661ca, "ktime_get_seconds" },
	{ 0x6f3c2a7c, "wiphy_hrtimer_work_timer" },
	{ 0xdff18c89, "tasklet_setup" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0xd272d446, "rcu_barrier" },
	{ 0x2840cb58, "kstrtoull_from_user" },
	{ 0x3c8d8211, "led_trigger_event" },
	{ 0xf48e39a9, "cfg80211_shutdown_all_interfaces" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0x6d2f6d40, "bridge_tunnel_header" },
	{ 0x934bd4a1, "dev_kfree_skb_any_reason" },
	{ 0xbd9aacde, "round_jiffies" },
	{ 0x41575726, "cfg80211_report_obss_beacon_khz" },
	{ 0x25b930e7, "ieee80211_bss_get_elem" },
	{ 0x0040afbe, "param_ops_int" },
	{ 0xc9533aa4, "_dev_printk" },
	{ 0xf1de9e85, "kvfree" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
	{ 0x57cf3421, "crypto_alloc_shash" },
	{ 0x5b2a9710, "debugfs_create_dir" },
	{ 0xa2e5cc1d, "ieee80211_ie_split_ric" },
	{ 0x23ef80fb, "generic_file_llseek" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0xb3e53695, "led_trigger_blink" },
	{ 0x437e81c7, "simple_read_from_buffer" },
	{ 0xf52f8b44, "__kvmalloc_node_noprof" },
	{ 0x30d2b148, "cfg80211_radio_chandef_valid" },
	{ 0x7cd33e49, "rht_bucket_nested" },
	{ 0x955467e2, "trace_handle_return" },
	{ 0x986d7c37, "__skb_gso_segment" },
	{ 0xe59c54dc, "cfg80211_unlink_bss" },
	{ 0x0fc95a62, "__cfg80211_get_bss" },
	{ 0xf48e39a9, "wiphy_free" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0xd272d446, "BUG_func" },
	{ 0x9cb91b7f, "sg_init_table" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0xd85c0fe8, "acpi_amd_wbrf_supported_producer" },
	{ 0x296c97a2, "cfg80211_cqm_rssi_notify" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xfaabfe5e, "kmalloc_caches" },
	{ 0xbd29e5b9, "netdev_info" },
	{ 0x1641838f, "kmem_cache_destroy" },
	{ 0x236cf4b7, "skb_queue_head" },
	{ 0xaef1f20d, "system_wq" },
	{ 0x8ef8065d, "cfg80211_auth_timeout" },
	{ 0x0df52d31, "cfg80211_rx_unprot_mlme_mgmt" },
	{ 0x92a517f6, "crypto_alloc_skcipher" },
	{ 0xd272d446, "synchronize_net" },
	{ 0xbebe66ff, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x236a2cc3,
	0x2795c1e6,
	0xab931ceb,
	0xfb958835,
	0xfbc77297,
	0x71094483,
	0xd21a08c4,
	0x5160854e,
	0xbd243a00,
	0xffefa408,
	0x21feb186,
	0xa61fd7aa,
	0xd272d446,
	0x463cbdff,
	0x5bdf561d,
	0x7cd33e49,
	0x7a70e1b6,
	0xfe5422fa,
	0x5244a5dc,
	0x639765f4,
	0x092a35a2,
	0x87b843e0,
	0x18d43ede,
	0x616b34f9,
	0xd272d446,
	0xc828c23a,
	0x9d2ac898,
	0x1f6beaf4,
	0x534ed5f3,
	0xd710adbf,
	0x0661d50c,
	0x7851be11,
	0x747bd2f7,
	0x20fe0e51,
	0xa53f4e29,
	0xb978e339,
	0x40a621c5,
	0x0fe34880,
	0x49733ad6,
	0xc327249d,
	0x8419ab73,
	0xd79eeabc,
	0x494c552b,
	0x86fa8d8a,
	0xd272d446,
	0x19268c9c,
	0x9cc447bd,
	0xf0324b79,
	0xf35915f4,
	0x74f8d140,
	0x47e663dd,
	0x4dcc39b1,
	0xc36345fa,
	0x0ded3c3f,
	0xa39ffaf2,
	0x40a621c5,
	0xbd03ed67,
	0x18cc66c8,
	0x5a844b26,
	0xf803a1ce,
	0x71ce30b2,
	0x6e622f16,
	0x41de7873,
	0xe59c54dc,
	0x7647c40c,
	0x506e75e8,
	0x494c552b,
	0x8bc8f40f,
	0x57a358d2,
	0xa666ac19,
	0x90660c97,
	0x76a12bc4,
	0xa53f4e29,
	0xcb8b6ec6,
	0xbd9aacde,
	0x1df26172,
	0x9eb408d0,
	0xf10582b6,
	0x3d7f79e6,
	0x66526f72,
	0x2352b148,
	0x499ad459,
	0xda519ead,
	0x8af51ca4,
	0x2352b148,
	0x8cc65d3d,
	0x7851be11,
	0xc783d29b,
	0xa503e586,
	0xa9f25797,
	0x37197a78,
	0x187489d1,
	0x46dfb704,
	0xe1e1f979,
	0xa6a33da7,
	0x5ae9ee26,
	0xbe011736,
	0xde338d9a,
	0xb69d5d49,
	0xd272d446,
	0xf8ad0200,
	0x462ecb4a,
	0xbcbea717,
	0xdb95b487,
	0xa117c6c6,
	0xa5d4e4fb,
	0x46a1b3eb,
	0xbd9aacde,
	0x026921de,
	0xe59bea4d,
	0x5a844b26,
	0x5a844b26,
	0x82872ec5,
	0x58b11380,
	0xf00d45ac,
	0xe0831e69,
	0xe8213e80,
	0x2f8a88bc,
	0xc0a57383,
	0xbd03ed67,
	0xff7fbdd1,
	0x4c6ad752,
	0xa97ffed0,
	0x14aae057,
	0x19268c9c,
	0xd272d446,
	0xfdab0efa,
	0xd79a7a0d,
	0x65fb12e0,
	0x0b5a3687,
	0x8ce83585,
	0xde338d9a,
	0x236a2cc3,
	0xd710adbf,
	0xb9064440,
	0x9479a1e8,
	0xfd285498,
	0x95221fe6,
	0xe59c54dc,
	0x561929d4,
	0x0e2dbb44,
	0x0e125918,
	0x38c8be28,
	0x9df49997,
	0x9b1de7cb,
	0x53f8d496,
	0x8fe0ca7d,
	0x236cf4b7,
	0x2da7dc62,
	0x90a48d82,
	0xbd03ed67,
	0x09b7f879,
	0xd70733be,
	0x65d3bb15,
	0xa5413506,
	0x26226372,
	0x9c0551c6,
	0x07d50c57,
	0x2013acfb,
	0xa2b16286,
	0x6e1e6e91,
	0xc5b6d417,
	0xc56fbad7,
	0xa41c6561,
	0xce2a82d8,
	0x484b7053,
	0x1967016c,
	0x98aacd62,
	0x21feb186,
	0x30377720,
	0x55912ab2,
	0x34ea9a19,
	0xf0d1e02d,
	0x6884e085,
	0x3768e85d,
	0x18d43ede,
	0xd272d446,
	0x30212f3b,
	0xb82edfb3,
	0xaef1f20d,
	0x37c2f125,
	0xd272d446,
	0x8cc65d3d,
	0xee3afd5d,
	0x32feeafc,
	0x23ef80fb,
	0x22443267,
	0x95628678,
	0x8db9b6ac,
	0xbd03ed67,
	0xe9d64c0b,
	0x74c4a3b8,
	0x5b8ebf89,
	0x2ae9a219,
	0x014deb21,
	0xbeb1d261,
	0x27687163,
	0x8bc8f40f,
	0x48a9ac02,
	0xf46d5bf3,
	0x18d43ede,
	0x4c46394d,
	0xe6cb68a5,
	0xa612b1b2,
	0xc6f5478c,
	0x2435d559,
	0x2007366e,
	0xa503e586,
	0xa97ffed0,
	0x0575a33e,
	0xc609ff70,
	0x5735319c,
	0xf8faa012,
	0x9c0551c6,
	0x248ac936,
	0x5a844b26,
	0xf48e39a9,
	0x7db71bea,
	0xcbc1e051,
	0xbd03ed67,
	0x8419ab73,
	0x3fa68085,
	0x86632fd6,
	0x30f08ac4,
	0x2ab056fd,
	0xb5c51982,
	0x402db74e,
	0x4644dbe9,
	0x4f6317dc,
	0xfcc2e8f3,
	0x173ec8da,
	0xbd11acc5,
	0xc1e6c71e,
	0xe54e0a6b,
	0xe199f25f,
	0xc9adb44e,
	0x81a1a811,
	0x91f966bb,
	0x01b2a8ec,
	0x255dfd5a,
	0x23ef80fb,
	0x65be4825,
	0x9b55ab84,
	0xad665de6,
	0xb5c51982,
	0xb2a14382,
	0x7295b8c3,
	0x484b7053,
	0x8419ab73,
	0x27683a56,
	0x9b1de7cb,
	0x5a844b26,
	0x71798f7e,
	0x776da765,
	0xbd069841,
	0x4b208175,
	0xb34d1fb3,
	0x6d2f6d40,
	0xec3d8607,
	0x0ed0b0ad,
	0xf3cb510e,
	0x2352b148,
	0xaf9e34ab,
	0xcb53408f,
	0x0040afbe,
	0xbeb1d261,
	0xd272d446,
	0xfd285498,
	0x0df1334a,
	0xd2444fe9,
	0x386e4ba3,
	0x29a6752d,
	0xf296206e,
	0xa26a3e58,
	0x4124c2d0,
	0xa97ffed0,
	0x94708fba,
	0x6aa3c7c7,
	0xb5ac1c73,
	0xf21f32c5,
	0x4a2b4431,
	0xec203997,
	0x2052b3d9,
	0x4badb84a,
	0x888b8f57,
	0x5c0e69f5,
	0x73344baf,
	0x269eada4,
	0xfd285498,
	0x690cdb06,
	0x058c185a,
	0x57458ec3,
	0xab931ceb,
	0x6f8082dd,
	0xd4b08efd,
	0x69f264ce,
	0xdd6830c7,
	0xf3e575f5,
	0xbd03ed67,
	0x82fd7238,
	0x7ec472ba,
	0xb9fcd065,
	0x7ec472ba,
	0x9e87a771,
	0x70193767,
	0xa4c0178c,
	0xba1bf595,
	0x023dc39f,
	0x7687f56f,
	0x23e7cd4a,
	0x51f5b978,
	0x522970b0,
	0xc9c82041,
	0xd989b305,
	0x36353f73,
	0xe2bcbfef,
	0xa5c7582d,
	0xf46d5bf3,
	0x94a00c08,
	0x0040afbe,
	0x47596da4,
	0x5a844b26,
	0x0ed0b0ad,
	0x23f25c0a,
	0xfd285498,
	0xc064623f,
	0x97acb853,
	0x2d88a3ab,
	0x546c19d9,
	0x75738bed,
	0x0f4c28ea,
	0xfd285498,
	0x5a844b26,
	0xb0e3a978,
	0xc670e699,
	0x6ab80e94,
	0x3196e54e,
	0x21f84682,
	0xfb3bad2b,
	0xde338d9a,
	0x0f4c28ea,
	0xce2de609,
	0x146ee687,
	0xde1257e4,
	0xd272d446,
	0x5f6060c2,
	0x1b8bd63b,
	0xb6bf29fc,
	0x02f9bbf0,
	0x01411ce7,
	0x224a53e7,
	0xfaed219f,
	0x171098ce,
	0x5a844b26,
	0xfd285498,
	0x7a6661ca,
	0x6f3c2a7c,
	0xdff18c89,
	0xdf4bee3d,
	0xd272d446,
	0x2840cb58,
	0x3c8d8211,
	0xf48e39a9,
	0xe4de56b4,
	0x43a349ca,
	0x6d2f6d40,
	0x934bd4a1,
	0xbd9aacde,
	0x41575726,
	0x25b930e7,
	0x0040afbe,
	0xc9533aa4,
	0xf1de9e85,
	0xd272d446,
	0x9c0551c6,
	0x57cf3421,
	0x5b2a9710,
	0xa2e5cc1d,
	0x23ef80fb,
	0xde338d9a,
	0xb3e53695,
	0x437e81c7,
	0xf52f8b44,
	0x30d2b148,
	0x7cd33e49,
	0x955467e2,
	0x986d7c37,
	0xe59c54dc,
	0x0fc95a62,
	0xf48e39a9,
	0x5a844b26,
	0xd272d446,
	0x9cb91b7f,
	0x12ca6142,
	0xd85c0fe8,
	0x296c97a2,
	0x7851be11,
	0xfaabfe5e,
	0xbd29e5b9,
	0x1641838f,
	0x236cf4b7,
	0xaef1f20d,
	0x8ef8065d,
	0x0df52d31,
	0x92a517f6,
	0xd272d446,
	0xbebe66ff,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"crypto_skcipher_encrypt\0"
	"cfg80211_inform_bss_frame_data\0"
	"cfg80211_sched_scan_results\0"
	"wiphy_locked_debugfs_read\0"
	"cfg80211_sinfo_alloc_tid_stats\0"
	"skb_complete_wifi_ack\0"
	"__hw_addr_init\0"
	"vscnprintf\0"
	"cfg80211_mgmt_tx_status_ext\0"
	"cfg80211_rx_assoc_resp\0"
	"cfg80211_rx_unexpected_4addr_frame\0"
	"__check_object_size\0"
	"rtnl_unlock\0"
	"arc4_setkey\0"
	"bpf_trace_run4\0"
	"__rht_bucket_nested\0"
	"skb_copy_bits\0"
	"hrtimer_setup\0"
	"idr_find\0"
	"cfg80211_merge_profile\0"
	"_copy_from_user\0"
	"eth_mac_addr\0"
	"skb_put\0"
	"cfg80211_links_removed\0"
	"__rcu_read_lock\0"
	"cfg80211_chandef_dfs_required\0"
	"static_key_slow_inc\0"
	"cfg80211_scan_done\0"
	"__msecs_to_jiffies\0"
	"__kmalloc_noprof\0"
	"cfg80211_assoc_comeback\0"
	"rtnl_is_locked\0"
	"consume_skb\0"
	"csum_partial\0"
	"memmove\0"
	"regulatory_pre_cac_allowed\0"
	"snprintf\0"
	"skb_clone_sk\0"
	"queue_work_on\0"
	"trace_raw_output_prep\0"
	"wiphy_work_flush\0"
	"netif_receive_skb_list\0"
	"_find_first_bit\0"
	"cfg80211_bss_color_notify\0"
	"__SCT__preempt_schedule\0"
	"cfg80211_remain_on_channel_expired\0"
	"bpf_trace_run6\0"
	"cfg80211_cac_event\0"
	"debugfs_create_symlink\0"
	"skb_dequeue\0"
	"__trace_trigger_soft_disabled\0"
	"cfg80211_register_netdevice\0"
	"__sw_hweight32\0"
	"trace_event_printf\0"
	"led_trigger_blink_oneshot\0"
	"scnprintf\0"
	"this_cpu_off\0"
	"cfg80211_is_element_inherited\0"
	"__x86_indirect_thunk_r15\0"
	"ieee80211_amsdu_to_8023s\0"
	"__hw_addr_unsync\0"
	"cfg80211_wdev_channel_allowed\0"
	"__printk_ratelimit\0"
	"cfg80211_ref_bss\0"
	"ieee80211_mandatory_rates\0"
	"ieee80211_chandef_to_operating_class\0"
	"_find_first_zero_bit\0"
	"crc32_be\0"
	"ieee80211_operating_class_to_chandef\0"
	"dev_alloc_name\0"
	"___pskb_trim\0"
	"trace_event_raw_init\0"
	"memcpy\0"
	"kfree\0"
	"round_jiffies_relative\0"
	"cfg80211_iter_rnr\0"
	"wiphy_hrtimer_work_cancel\0"
	"get_random_u16\0"
	"debugfs_create_file_short\0"
	"sg_init_one\0"
	"timer_delete\0"
	"crypto_alloc_aead\0"
	"bpf_trace_run2\0"
	"crypto_aead_setauthsize\0"
	"timer_delete_sync\0"
	"crypto_aead_decrypt\0"
	"net_ratelimit\0"
	"cfg80211_chandef_valid\0"
	"cfg80211_new_sta\0"
	"crypto_skcipher_setkey\0"
	"vsnprintf\0"
	"wiphy_delayed_work_pending\0"
	"netdev_set_default_ethtool_ops\0"
	"_raw_spin_lock_irqsave\0"
	"bitmap_free\0"
	"__per_cpu_offset\0"
	"__dynamic_dev_dbg\0"
	"_raw_spin_lock\0"
	"ether_setup\0"
	"__fentry__\0"
	"pskb_expand_head\0"
	"static_key_slow_dec\0"
	"skb_csum_hwoffload_help\0"
	"skb_queue_purge_reason\0"
	"trace_event_buffer_commit\0"
	"dev_addr_mod\0"
	"cfg80211_calculate_bitrate\0"
	"round_jiffies_up\0"
	"crypto_destroy_tfm\0"
	"eth_type_trans\0"
	"__x86_indirect_thunk_r11\0"
	"__x86_indirect_thunk_rax\0"
	"alloc_netdev_mqs\0"
	"wiphy_new_nm\0"
	"kstrtou16\0"
	"cfg80211_sta_opmode_change_notify\0"
	"_printk\0"
	"cfg80211_ready_on_channel\0"
	"cfg80211_reg_check_beaconing\0"
	"__ref_stack_chk_guard\0"
	"___ratelimit\0"
	"drop_reasons_unregister_subsys\0"
	"skb_checksum_help\0"
	"cfg80211_classify8021d\0"
	"cfg80211_tx_mgmt_expired\0"
	"__stack_chk_fail\0"
	"debugfs_create_x64\0"
	"ieee80211_fragment_element\0"
	"cfg80211_rx_mlme_mgmt\0"
	"wiphy_delayed_work_queue\0"
	"queue_delayed_work_on\0"
	"_raw_spin_unlock_bh\0"
	"crypto_skcipher_decrypt\0"
	"__kmalloc_large_noprof\0"
	"wiphy_register\0"
	"strnlen\0"
	"unregister_inetaddr_notifier\0"
	"__alloc_skb\0"
	"cfg80211_put_bss\0"
	"cfg80211_nan_func_terminated\0"
	"cfg80211_link_sinfo_alloc_tid_stats\0"
	"cfg80211_ch_switch_notify\0"
	"idr_get_next\0"
	"cfg80211_tx_mlme_mgmt\0"
	"_dev_info\0"
	"cfg80211_gtk_rekey_notify\0"
	"skb_copy_expand\0"
	"skb_queue_tail\0"
	"ieee80211_get_channel_khz\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"cfg80211_check_combinations\0"
	"sized_strscpy\0"
	"__cfg80211_radar_event\0"
	"cfg80211_tdls_oper_request\0"
	"cfg80211_find_elem_match\0"
	"tasklet_kill\0"
	"idr_remove\0"
	"cfg80211_control_port_tx_status\0"
	"cfg80211_chandef_primary\0"
	"cfg80211_get_drvinfo\0"
	"__sw_hweight64\0"
	"ieee80211_get_8023_tunnel_proto\0"
	"crypto_aead_setkey\0"
	"__skb_get_hash_net\0"
	"kernel_param_lock\0"
	"wiphy_locked_debugfs_write\0"
	"perf_trace_buf_alloc\0"
	"cfg80211_rx_spurious_frame\0"
	"perf_trace_run_bpf_submit\0"
	"cfg80211_ibss_joined\0"
	"cfg80211_nan_match\0"
	"crypto_shash_setkey\0"
	"cfg80211_chandef_compatible\0"
	"simple_open\0"
	"skb_pull\0"
	"synchronize_rcu\0"
	"cfg80211_iter_combinations\0"
	"idr_alloc\0"
	"system_freezable_wq\0"
	"cfg80211_iftype_allowed\0"
	"__rcu_read_unlock\0"
	"crypto_aead_encrypt\0"
	"sk_skb_reason_drop\0"
	"mod_timer\0"
	"noop_llseek\0"
	"ieee80211_is_valid_amsdu\0"
	"bpf_trace_run5\0"
	"__usecs_to_jiffies\0"
	"random_kmalloc_seed\0"
	"cfg80211_michael_mic_failure\0"
	"cfg80211_cqm_pktloss_notify\0"
	"cfg80211_any_usable_channels\0"
	"arc4_crypt\0"
	"dev_close\0"
	"destroy_workqueue\0"
	"mac_pton\0"
	"crc32_le\0"
	"cfg80211_free_nan_func\0"
	"mutex_lock\0"
	"skb_push\0"
	"ieee80211_operating_class_to_band\0"
	"kmem_cache_free\0"
	"crypto_shash_init\0"
	"debugfs_remove\0"
	"strncmp\0"
	"cfg80211_mlo_reconf_add_done\0"
	"cfg80211_del_sta_sinfo\0"
	"netif_receive_skb\0"
	"trace_event_reg\0"
	"strncpy\0"
	"crypto_shash_digest\0"
	"kfree_sensitive\0"
	"__tasklet_schedule\0"
	"skb_ensure_writable\0"
	"__x86_indirect_thunk_r13\0"
	"wiphy_unregister\0"
	"free_netdev\0"
	"__bitmap_subset\0"
	"phys_base\0"
	"wiphy_work_queue\0"
	"led_trigger_unregister\0"
	"_find_next_bit\0"
	"ieee80211_radiotap_iterator_init\0"
	"cfg80211_notify_new_peer_candidate\0"
	"__cpu_online_mask\0"
	"memcmp\0"
	"debugfs_change_name\0"
	"ieee80211_data_to_8023_exthdr\0"
	"__local_bh_enable_ip\0"
	"sscanf\0"
	"ethtool_op_get_link\0"
	"__mutex_init\0"
	"__fortify_panic\0"
	"jiffies_to_msecs\0"
	"debugfs_create_ulong\0"
	"_raw_spin_unlock_irqrestore\0"
	"kstrtou8\0"
	"bpf_trace_run1\0"
	"idr_destroy\0"
	"default_llseek\0"
	"cfg80211_epcs_changed\0"
	"nl80211_chan_width_to_mhz\0"
	"cfg80211_schedule_channels_check\0"
	"__cpu_possible_mask\0"
	"rhashtable_free_and_destroy\0"
	"ieee80211_freq_khz_to_channel\0"
	"kernel_param_unlock\0"
	"wiphy_work_cancel\0"
	"memset\0"
	"_dev_warn\0"
	"__x86_indirect_thunk_r10\0"
	"wiphy_delayed_work_timer\0"
	"wiphy_hrtimer_work_queue\0"
	"kstrtoull\0"
	"cfg80211_chandef_usable\0"
	"bitmap_zalloc\0"
	"rfc1042_header\0"
	"rht_bucket_nested_insert\0"
	"wiphy_delayed_work_cancel\0"
	"ieee80211_strip_8023_mesh_hdr\0"
	"timer_shutdown_sync\0"
	"kfree_skb_list_reason\0"
	"cfg80211_cqm_beacon_loss_notify\0"
	"param_ops_charp\0"
	"__flush_workqueue\0"
	"__x86_return_thunk\0"
	"unregister_inet6addr_notifier\0"
	"debugfs_create_u32\0"
	"kmem_cache_alloc_noprof\0"
	"kmemdup_noprof\0"
	"cfg80211_rx_control_port\0"
	"nr_cpu_ids\0"
	"__hw_addr_sync\0"
	"__pskb_pull_tail\0"
	"netif_rx\0"
	"__netdev_alloc_skb\0"
	"debugfs_create_x16\0"
	"__kmem_cache_create_args\0"
	"ieee80211_s1g_channel_width\0"
	"__crypto_memneq\0"
	"kasprintf\0"
	"cfg80211_get_radio_idx_by_chan\0"
	"drop_reasons_register_subsys\0"
	"strcmp\0"
	"skb_trim\0"
	"cfg80211_ch_switch_started_notify\0"
	"cfg80211_check_station_change\0"
	"unregister_netdevice_notifier\0"
	"free_percpu\0"
	"jiffies\0"
	"nonseekable_open\0"
	"cfg80211_sched_scan_stopped_locked\0"
	"pv_ops\0"
	"bpf_trace_run3\0"
	"rhashtable_insert_slow\0"
	"sprintf\0"
	"idr_for_each\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"cpu_number\0"
	"call_rcu\0"
	"__preempt_count\0"
	"cfg80211_unregister_wdev\0"
	"__dev_queue_xmit\0"
	"kvfree_call_rcu\0"
	"gro_receive_skb\0"
	"cfg80211_probe_status\0"
	"rhltable_init_noprof\0"
	"pcpu_alloc_noprof\0"
	"freq_reg_info\0"
	"rhashtable_init_noprof\0"
	"trace_event_buffer_reserve\0"
	"cfg80211_stop_iface\0"
	"ieee80211_radiotap_iterator_next\0"
	"cfg80211_rx_mgmt_ext\0"
	"strsep\0"
	"mutex_unlock\0"
	"crypto_shash_finup\0"
	"param_ops_bool\0"
	"cfg80211_defragment_element\0"
	"__x86_indirect_thunk_rcx\0"
	"wiphy_delayed_work_flush\0"
	"__dynamic_pr_debug\0"
	"register_inet6addr_notifier\0"
	"__kmalloc_cache_noprof\0"
	"ktime_get\0"
	"cancel_work_sync\0"
	"validate_usercopy_range\0"
	"__warn_printk\0"
	"netif_carrier_off\0"
	"register_netdevice_notifier\0"
	"__x86_indirect_thunk_r9\0"
	"ieee80211_channel_to_freq_khz\0"
	"led_trigger_register\0"
	"skb_copy\0"
	"cfg80211_assoc_failure\0"
	"ieee80211_hdrlen\0"
	"skb_clone\0"
	"_raw_spin_lock_bh\0"
	"netif_carrier_on\0"
	"debugfs_create_file_full\0"
	"cfg80211_chandef_create\0"
	"cfg80211_report_wowlan_wakeup\0"
	"rtnl_lock\0"
	"ieee80211_get_mesh_hdrlen\0"
	"__crypto_xor\0"
	"cfg80211_send_layer2_update\0"
	"timer_init_key\0"
	"acpi_amd_wbrf_add_remove\0"
	"get_random_bytes\0"
	"cfg80211_get_p2p_attr\0"
	"cfg80211_get_iftype_ext_capa\0"
	"__x86_indirect_thunk_r12\0"
	"register_inetaddr_notifier\0"
	"ktime_get_seconds\0"
	"wiphy_hrtimer_work_timer\0"
	"tasklet_setup\0"
	"alloc_workqueue_noprof\0"
	"rcu_barrier\0"
	"kstrtoull_from_user\0"
	"led_trigger_event\0"
	"cfg80211_shutdown_all_interfaces\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"bridge_tunnel_header\0"
	"dev_kfree_skb_any_reason\0"
	"round_jiffies\0"
	"cfg80211_report_obss_beacon_khz\0"
	"ieee80211_bss_get_elem\0"
	"param_ops_int\0"
	"_dev_printk\0"
	"kvfree\0"
	"__SCT__preempt_schedule_notrace\0"
	"tasklet_unlock_wait\0"
	"crypto_alloc_shash\0"
	"debugfs_create_dir\0"
	"ieee80211_ie_split_ric\0"
	"generic_file_llseek\0"
	"_raw_spin_unlock\0"
	"led_trigger_blink\0"
	"simple_read_from_buffer\0"
	"__kvmalloc_node_noprof\0"
	"cfg80211_radio_chandef_valid\0"
	"rht_bucket_nested\0"
	"trace_handle_return\0"
	"__skb_gso_segment\0"
	"cfg80211_unlink_bss\0"
	"__cfg80211_get_bss\0"
	"wiphy_free\0"
	"__x86_indirect_thunk_r8\0"
	"BUG_func\0"
	"sg_init_table\0"
	"ktime_get_with_offset\0"
	"acpi_amd_wbrf_supported_producer\0"
	"cfg80211_cqm_rssi_notify\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"netdev_info\0"
	"kmem_cache_destroy\0"
	"skb_queue_head\0"
	"system_wq\0"
	"cfg80211_auth_timeout\0"
	"cfg80211_rx_unprot_mlme_mgmt\0"
	"crypto_alloc_skcipher\0"
	"synchronize_net\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cfg80211,libarc4");


MODULE_INFO(srcversion, "E6D2532973069D0239CD500");
