#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/uaccess.h>

MODULE_LICENSE("GPL");


void vulnerable_function(char *user_data) {
    char kernel_buffer[64];

    strcpy(kernel_buffer, user_data);
}

int init_module(void) {
    printk(KERN_INFO "Vulnerable Driver Loaded.\n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "Vulnerable Driver Unloaded.\n");
}
