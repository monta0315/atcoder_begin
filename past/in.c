#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  char s[100];
  scanf("%s",s);
  int len = strlen(s);
  printf("%c%d%c\n",s[0],len-2,s[len-1]);
  return 0;
}
