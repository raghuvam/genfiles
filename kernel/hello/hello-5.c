

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("raghu");

static short int xShort = 3;
static int xInt = 420;
static char* xString = "hello";
static long int xLong = 9900;


module_param(xShort, short , S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP);
MODULE_PARM_DESC(xShort, "my short integer");

module_param(xInt, int, S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP);
MODULE_PARM_DESC(xInt, "my integer");

module_param(xString, charp ,  S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP);
MODULE_PARM_DESC(xString,"my char - string");

module_param(xLong,long,  S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP);
MODULE_PARM_DESC(xLong,"my long integer");

static  int __init hello_5_init()
{

	printk(KERN_ALERT "hello_5 module \n");
	printk(KERN_ALERT "my short: %hd \n ",xShort);
	printk(KERN_ALERT "my integer: %d \n ",xInt);
	printk(KERN_ALERT "my long integer: %ld \n ",xLong);
	printk(KERN_ALERT "my string: %s", xString);
	printk(KERN_ALERT "returning from init");
	return 0;
} 

static void __exit hello_5_exit(void)
{
	printk(KERN_ALERT "Closing the module");
}

module_init(hello_5_init);
module_exit(hello_5_exit);