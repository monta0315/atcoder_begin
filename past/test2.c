#include<stdio.h>
#include<string.h>
#define rep(i,n) for(i=0;i<(n);i++)

int main(){
  char s[11],t[12];
  scanf("%s%s",s,t);
  int i,len;
  len=strlen(s);
  rep(i,len){
    if(s[i]!=t[i]){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
