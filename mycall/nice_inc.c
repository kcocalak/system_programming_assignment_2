#include <linux/syscalls.h>
#include <linux/kernel.h>

asmlinkage long sys_nice_inc(pid_t pid, int value){
    struct task_struct *task;

        for (task = next_task; task != &init_task; task=next_task(task))
        {
            if (task -> pid ==pid)
            {
                task -> nice_inc =value;
                prink(KERN_INFO "Nice increment value of pid= %d, is= &", task -> pid, value)
            
                break;
            }
            
        }
            
}