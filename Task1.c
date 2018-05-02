#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
void main(){
  printf("PID: %d \n",getpid());
  printf("UID: %d \n",getuid());
  printf("GROUP_ID: %d \n",getgid());
  printf("Enviornment Variable(USER): %s\n",getenv("LOGNAME"));
}