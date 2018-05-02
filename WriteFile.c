#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/syscall.h>
void main(){
  FILE *fp;
  long int pid , tid;
  fp=fopen("text.txt","w+");
  pid=getpid();
  fprintf(fp,"Process id: %ld",pid);
  tid=getgid();
  fprintf(fp,"Group id: %ld",tid);
  fclose(fp);
}