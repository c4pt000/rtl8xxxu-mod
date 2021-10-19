#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb7700a31, "module_layout" },
	{ 0x7e7773d0, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xadbde5b6, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xec050850, "find_vpid" },
	{ 0x5367b4b4, "boot_cpu_data" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x65c3e478, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd0d6963, "dev_get_by_name" },
	{ 0x15929efd, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x48774b8e, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x58f50ffd, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x70dbf3d9, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x8983b6cc, "filp_close" },
	{ 0xace8a217, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc98be206, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa8ed5329, "pv_ops" },
	{ 0x379746f3, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8cfa63a5, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc168877d, "__netdev_alloc_skb" },
	{ 0x87abe8d1, "netif_rx" },
	{ 0x3d905f02, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x11537200, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdfa99319, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c33a0ef, "netif_tx_wake_queue" },
	{ 0x9112680c, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xec07180, "current_task" },
	{ 0x926c948b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x291a7c50, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xeee75377, "register_netdev" },
	{ 0xd831ab1b, "wireless_send_event" },
	{ 0xdd9de175, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0xf43020b2, "skb_push" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x588c3ad7, "kill_pid" },
	{ 0x58e75804, "skb_pull" },
	{ 0x36f32e5a, "device_init_wakeup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xd43b5540, "flush_signals" },
	{ 0x26d70186, "skb_queue_tail" },
	{ 0x7cc8318a, "netif_device_attach" },
	{ 0x369608be, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb4b1171e, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x20ac89d4, "usb_reset_device" },
	{ 0xade736d7, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9ce1e0cb, "eth_type_trans" },
	{ 0x787ef59, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x82edd405, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x534a2c7a, "dev_alloc_name" },
	{ 0xcf2a6966, "up" },
	{ 0xa89b1b09, "usb_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf7f83bf2, "skb_dequeue" },
	{ 0x956ad27f, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xdaf94194, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3c6298d5, "param_ops_uint" },
	{ 0x43daaf67, "skb_copy_bits" },
	{ 0xc50fe933, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0x43fc1941, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf4c3ef5a, "filp_open" },
	{ 0x16f0ffd4, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2604p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0953d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p6249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0823d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "452957927051D847095989B");
