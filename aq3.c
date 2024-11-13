#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<math.h>
#include"circle.h"
#include"square.h"
#include"rectangle.h"




int main(){

int pid1,pid2,pid3,s1,s2,s3,err;
pid1 =fork();
if(pid1 == 0){
printf("rectangle :%d",rect_area(2,3));
_exit(0);
}
else{
waitpid(pid1,&s1,0);
}
pid2=fork();
if(pid2==0){
printf("area of the square; %d",sqr_area(5));
sleep(1);
_exit(0);
}
else{
waitpid(pid2,&s2,0);
}
pid3=fork();
if(pid3==0){
printf("area circle:%d",cir_area(2));
sleep(1);
_exit(0);
}
else{
waitpid(pid3,&s3,0);
}

if(WEXITSTATUS(s1)==0){
if(WEXITSTATUS(s2)==0){

if(WEXITSTATUS(s3)==0){
char *args[]={"gcc","-o","q2.out","circle.o","square.o","rectangle.o","q2.o",NULL};
err=execvp("./q2.out",args);
if(err==-1){
printf("exec failed\n");
}
}

}

}

return 0;
}
