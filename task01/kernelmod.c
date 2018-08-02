#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("MIT");

static int hello_world_init(void)
{
	/* Check /var/log/kern.log or output of `dmesg` */
	printk(KERN_DEBUG "Hello World!\n");
	return 0;
}

static void hello_world_exit(void)
{
	return;
}

module_init(hello_world_init);
module_exit(hello_world_exit);
