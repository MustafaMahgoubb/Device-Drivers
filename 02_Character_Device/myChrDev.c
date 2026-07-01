#include <linux/cdev.h>
#include <linux/module.h>
#include <linux/fs.h>


dev_t device_number =0ul;
struct cdev myCDev


static int __init myInitfunction(void)
{
    // First allocate chr device in the RAM under /dev
    alloc_chrdev_region();

    cdev_init();

    return 0;
}
