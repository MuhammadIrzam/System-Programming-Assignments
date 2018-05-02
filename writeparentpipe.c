#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#define BUFSIZE 10
int main(){
    char bufin[BUFSIZE] = "empty";
    char bufout[] = "hello" ;
    int bytesin;
    pid_t childpid;
    int fd[2];
  
  if (pipe (fd) == -1 ){
       perror("Failed to create the pipe");
       return 1;
  }
  bytesin = strlen(bufin);
  childpid=fork();
  if(childpid == -1){
       perror("Failed to fork");
       return 1;
  }
  if(childpid)
     write(fd[1] , bufout , strlen(bufout)+1 );
  else
    bytesin = read(fd[0] , bufin , BUFSIZE);
    fprintf(stderr , "[%ld]:my buffin is {% . *s} , my bufout is {%s}\n", 
            (long)getpid(), bytesin, bufin, bufout);
  return 0;
}