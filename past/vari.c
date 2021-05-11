#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int main(){
  char s[26];
  int ck[26]={0};
  int cnt[26]={0};
  scanf("%s",s);
  int len=strlen(s);
  rep(i,len){
    ck[i]=s[i]-'a';
    //printf("%d\n",ck[i]);
  }
  rep(j,len){
    //printf("%d",ck[j]);
    cnt[ck[j]]++;
  }
  rep(k,26){
    if(cnt[k]>1){
      printf("no\n");
      return 0;
    }
  }
  printf("yes\n");
  return 0;
}
