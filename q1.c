#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<signal.h>


int main(){

int n1;
printf("enter n1 : \n");
scanf("%d", &n1);

int ret=kill(n1,SIGKILL);
if(ret==-1)
{
perror("kill failed...\n");
_exit(0);    //exit(0);

}
printf("kill success with return as ; %d",ret);
return 0;

}
