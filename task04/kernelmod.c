// SPDX-License-Identifier: MIT
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual MIT/GPL");

static int hello_world_init(void)
{
	// Check /var/log/kern.log or output of `dmesg`
	pr_debug("Hello World!\n");
	return 0;
}

static void hello_world_exit(void) {}

module_init(hello_world_init);
module_exit(hello_world_exit);
