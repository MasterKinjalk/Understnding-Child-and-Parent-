#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc,char *argv[])
{
printf("Process id of example2.c = %d\n",getpid());
pid_t pid;
pid=fork();
if(pid>0)
{
printf("\nThe control is in parent process\n");
printf("Process id of parent = %d\n",getpid());
}
else
{
printf("\nThe control is in  child process\n");
printf("Process id of child = %d\n",getpid());
printf("\nCalling hello2.c from child\n");
char *arg[]={NULL};
execv("./hello2",arg);
}
wait(NULL);
return 0;
}
