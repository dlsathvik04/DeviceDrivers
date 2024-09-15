#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

static int hello_init(void){
   printk(KERN_ALERT "Hello. This module does nothing just remove it\n");
   return 0;
}

static void hello_exit(void){
   printk(KERN_INFO "Removing the module t~hat does nothing.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("LSD");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("The module that does nothing");