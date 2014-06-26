#include <linux/init.h>
#include <linux/module.h>
static int hello_init(void){
    dmesg();
    printk(KERN_ALERT "TEST: Hello world, This is sona module \n");
    return 0;
}
static void hello_exit(void){
    dmesg();
    printk(KERN_ALERT "TEST: Good bye world, This is sona module \n");
}
module_init(hello_init);
module_exit(hello_exit);
#This is commit 2
#This is commit 3

