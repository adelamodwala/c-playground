#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void) {
	printk(KERN_ALERT "Hello world!\n");

	return -6;
}

static void hello_exit(void) {
	printk(KERN_ALERT "Bye, curel world\n");
}

module_init(hello_init);

module_exit(hello_exit);
