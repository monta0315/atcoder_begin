#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int n;
  unsigned long long num,m=1;
  char a[100001][20];
  scanf("%d",&n);
  rep(i,n){
    scanf("%s",a[i]);
  }
  rep(j,n){
    if(a[j][0]=='0'){
      printf("%d\n",0);
      return 0;
    }
  }
  rep(k,n){
    num=a[k]-'0';
    m*=num;
    if(m>1000000000000000000){
      printf("%d\n",0);
      return 0;
    }
  }
  printf("%lld\n",m);
  return 0;
}
