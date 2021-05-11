#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  long long a,b,v,w,t,x,y;
  scanf("%lld%lld%lld%lld%lld",&a,&v,&b,&w,&t);
  if(v<=w){
    printf("NO\n");
    return 0;
  }
  x=abs(a-b);
  y=v-w;
  if(x<=t*y){
    printf("YES\n");
    return 0;
  }
  printf("NO\n");
  return 0;
}
