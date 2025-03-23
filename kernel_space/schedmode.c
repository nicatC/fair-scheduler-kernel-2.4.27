#include <linux/sched.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/schedmode.h>


asmlinkage int sys_schedmode(int mode){
    if(mode!=0 && mode!=1){
        return -EINVAL;
    }else{
        schedMode = mode;
        
    }
    return 0;
}
