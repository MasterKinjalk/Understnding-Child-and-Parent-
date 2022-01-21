#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
printf("\nWe are in hello2.c");
printf("\nProcess id of hello2.c = %d\n",getpid());
return 0;
}
