#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int x,N;
  scanf("%d%d",&x,&N);
  int p[101];
  int count[100]={0};
  int num=10000;
  int flag=0;
  int flag1=1;
  rep(k,101){
    count[k]=0;
  }
  rep(i,N){
    scanf("%d",&p[i]);
    count[p[i]]++;
  }
  if(N==0){
    printf("%d\n",x );
    return 0;
  }
  if(N==100){
    printf("%d\n",x );
    return 0;
  }
  for(int j=0;j<=100;j++){
    if(count[j]==0){
      if(num>abs(x-j)){
        num=abs(x-j);
        flag=j;
      }
    }
  }
  printf("%d\n",flag);
  return 0;
}

NULL 21 7 13 15
11 NULL 19 12 25
15 24 NULL 13 5
6 17 9 NULL 22
28 6 11 5 NULL
