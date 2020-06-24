#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int main(){
  char s;
  scanf("%c",&s);
  if(s>='a'&&s<='z'){
    printf("a\n");
  }else{
    printf("A\n");
  }
  return 0;
}
