#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int n;
  unsigned long long a[100001],sum=1;
  scanf("%d",&n);
  rep(i,n){
    scanf("%lld",&a[i]);
    if(a[i]==0){
      printf("%d\n",0);
      return 0;
    }
  }
  rep(j,n){
    sum*=a[j];
  }
  if(sum>1000000000000000000){
    printf("-1");
    return 0;
  }
  printf("%lld\n",sum);
  return 0;
}
