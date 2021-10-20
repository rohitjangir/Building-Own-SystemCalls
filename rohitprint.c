#include <linux/syscalls.h>
#include <linux/kernel.h>

SYSCALL_DEFINE1(rohitprint, char *,buf)
{
	char buffer[256];
	long copied = strncpy_from_user(buffer,buf, sizeof(buffer));
	printk("Rohit's system call returned this\n");
	return 0;
}
