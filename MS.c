#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int a,b,c,k;
  scanf("%d%d%d",&a,&b,&c);
  scanf("%d",&k);
  int total=0;
  total = a+b+c;
  int max=a;
  if(a<b){
    max=b;
  }else if(a<c){
    max=c;
  }
  if(b<c){
    max=c;
  }
  total=total-max;
  rep(i,k){
    max=max*2;
  }
  printf("%d\n",total+max);
  return 0;
}
