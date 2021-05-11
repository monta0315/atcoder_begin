#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define rep(i,n) for(int i=0; i < (n); i++)
int main(){
  int k;
  char s[100];
  scanf("%d%s",&k,s);
  int len=strlen(s);
  if(len<=k){
    printf("%s\n",s );
    return 0;
  }else{
    rep(i,k){
      printf("%c",s[i]);
    }
    printf("...");
    return 0;
  }
}
