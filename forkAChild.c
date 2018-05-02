#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
void main(){
    pid_t childpid;
    childpid = fork();
    if(childpid==-1){
    perror("Fialed to fork");
    }
    if (childpid==0){
      printf("I am child %ld\n", (long)getpid());
    }
    else{
      printf("I am Parent %ld\n", (long)getpid());
    }
}