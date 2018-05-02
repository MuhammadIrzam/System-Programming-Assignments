#define _GNU_SOURCE
#include<stdio.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
void main(){
  printf("Thread id %ld \n",syscall(SYS_gettid));
  printf("Parent Process id %ld\n",syscall(SYS_getppid));
  printf("Process id %ld \n",syscall(SYS_getpid));
  printf("Group id %ld\n",syscall(SYS_getgid));
  printf("User id %ld\n",syscall(SYS_getuid));
}
