#include <linux/kernel.h>

SYSCALL_DEFINE0(rohithello)
{
	printk("Hello world\n");
	return 0;
}
