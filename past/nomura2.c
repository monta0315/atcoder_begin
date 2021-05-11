#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  char t[200001];
  scanf("%s",t);
  int count=0;
  int len=strlen(t);
  rep(i,len){
    if(t[i]=='?'){
      t[i]='D';
    }
  }

  rep(j,len){
    printf("%c",t[j]);
  }
  return 0;
}
