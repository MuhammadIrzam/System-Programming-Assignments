#define _GNU_SOURCE
#include<stdio.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
void main(){
  printf("Thread id %ld \n",syscall(SYS_gettid));
}