



#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void)
{
	printk(KERN_ALERT "This is init_module member \n");
	return 0;
}

