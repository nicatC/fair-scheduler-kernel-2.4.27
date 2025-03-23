#ifndef __LINUX_SCHEDMODE_H
#define __LINUX_SCHEDMODE_H
#include <linux/linkage.h>

extern int schedMode;

asmlinkage int sys_schedmode(int mode);

#endif