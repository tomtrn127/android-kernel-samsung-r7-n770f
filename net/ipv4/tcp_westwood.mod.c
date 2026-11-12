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

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x407c1a3e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3347c71c, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
	{ 0x93744a0d, __VMLINUX_SYMBOL_STR(tcp_reno_ssthresh) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x2df50b0, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x774d4514, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0xe7be4ae, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

