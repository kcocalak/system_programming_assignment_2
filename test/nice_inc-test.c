#include <stdio.h>
#define nice_inc_sys_call_num 311

int main(int argc, int *argv[]){
    int pid =atoi(argv[1]);
    int nice_inc_value=atoi(argv[2]);

    long result =syscall(nice_inc_sys_call_num,pid,nice_inc_value);
    printf("result is %ld", result);
    
    return 0;
}