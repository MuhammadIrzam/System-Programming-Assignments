#include<stdio.h>
void main(){
  char ch;
  FILE *fp;
  fp=fopen("text.txt","r");
  while((ch=fpgetc(fp))!=EOF){
    printf("%c",ch);
  }
  fclose(fp);
}