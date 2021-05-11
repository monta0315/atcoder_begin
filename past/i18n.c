#include<stdio.h>
#include<string.h>
int main(){
  char s[101];
  scanf("%s",s);
  int num=strlen(s);
  printf("%c%d%c",s[0],num-2,s[num]);
}
