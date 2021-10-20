#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <linux/cred.h>
#include <linux/sched.h>

SYSCALL_DEFINE0(rohitprocess)
{
	printk("Parent Process Id: ",current->parent->pid);
	printk("Child Process Id: ",current->pid);
	return 0;
}
