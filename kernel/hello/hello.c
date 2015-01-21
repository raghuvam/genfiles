
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>


static int _init hello_init(void)
{
	printk(KERNEL_ALERT "Hello world kernel: %d \n", hello_data);

	return 0;
}

static void _exit hello_cleanup(void)
{
	printk(KERNEL_ALERT "cleanup module");

}

module_init(hello_init);
module_exit(hello_cleanup);