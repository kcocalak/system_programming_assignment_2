#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int n;
    printf("set process value");
    scanf("%d",n);
    pid_t pid,getid;
    getid=getpid();
    printf("%s %d\n","Process id=",getid);
    pid=fork();
    printf("%s %d\n","Child id=",getid);

    return 0;
}