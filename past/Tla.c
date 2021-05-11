#include<stdio.h>
#include<string.h>
int main(){
  char s1[11],s2[11],s3[11];
  scanf("%s%s%s",s1,s2,s3);
  printf("%c",s1[0]-32);
  printf("%c",s2[0]-32);
  printf("%c",s3[0]-32);
  return 0;
}
