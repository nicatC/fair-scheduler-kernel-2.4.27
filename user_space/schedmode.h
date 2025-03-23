#include <linux/unistd.h>
#include <errno.h>
extern int errno;

_syscall1(long, sys_schedmode, int, mode);