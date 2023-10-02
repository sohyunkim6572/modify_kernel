#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59253af, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4fcf516a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1d43b45f, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb7398bdc, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x1aad7ebb, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xbf58a035, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1a3dcd0, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x968fe82c, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x6b6863b6, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xba1455a4, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc3782eb8, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x537212b6, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x784ce693, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x775d579a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x53338a71, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd8688729, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xc3421b75, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x9d13d9a9, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd07e59b0, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2b888e76, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x4d65cbd5, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xfa28b9ff, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x8510ce42, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb3bee58, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xc72728d3, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xbb025281, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xea421b3b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3dd87329, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3cf694c, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xc0b86f07, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xc5cfbde1, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x52e7e962, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x24bd8810, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xfdf46eaf, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf24b3dfe, __VMLINUX_SYMBOL_STR(__ioremap) },
	{ 0x20cea915, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xe18d80d9, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x215bb3a3, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9ad79a86, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x2688f80a, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x3ecd7d27, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb90567d, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x4ee3d720, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xba911eef, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x1d2b7125, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x252212af, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x4660319c, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x7f9f8fc5, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x9e70ca27, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x55cbe363, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0x8e55bb83, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xa9be000e, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x35b3df96, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xba88ca04, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x9fe3bfec, __VMLINUX_SYMBOL_STR(remove_proc_subtree) },
	{ 0x3007272, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xfa81cdbe, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x4cfbfd4d, __VMLINUX_SYMBOL_STR(pci_clear_mwi) },
	{ 0x415d00fa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x31d1f902, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x181f9bf2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x2e3cb253, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x45a55ec8, __VMLINUX_SYMBOL_STR(__iounmap) },
	{ 0xc1517ee9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5b4c6964, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xedc0678f, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7ee7653a, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x484f6eea, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xbf8c3f1f, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0x276dfed7, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xd8761868, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc920433a, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x28131c43, __VMLINUX_SYMBOL_STR(dma_release_from_coherent_attr) },
	{ 0xd724f085, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x9b63897d, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent_attr) },
	{ 0x328689d4, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe07808cc, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x3014b766, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "5388F61A23A68A548D001CF");
