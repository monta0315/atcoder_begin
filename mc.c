#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  char s[100];
  int count[6]={0};
  scanf("%s",s);
  int len =strlen(s);
  rep(i,len){
    if(s[i]=='A'){
      count[0]++;
    }else if(s[i]=='B'){
      count[1]++;
    }else if(s[i]=='C'){
      count[2]++;
    }else if(s[i]=='D'){
      count[3]++;
    }else if(s[i]=='E'){
      count[4]++;
    }else if(s[i]=='F'){
      count[5]++;
    }
  }
  printf("%d ",count[0]);
  printf("%d ",count[1]);
  printf("%d ",count[2]);
  printf("%d ",count[3]);
  printf("%d ",count[4]);
  printf("%d\n",count[5]);
  return 0;
}
