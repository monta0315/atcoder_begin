#include<stdio.h>
int main(){
  int n,i;
  long long count=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    count*=i
    count=count%1000000007;
  }
  printf("%lld\n",count);
}
