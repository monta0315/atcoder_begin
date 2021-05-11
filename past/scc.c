#include<stdio.h>
int main(){
  long long n,m;
  scanf("%lld%lld",&n,&m);
  if(n>2*m){
    printf("%lld\n",m/2);
  }
  else if(n==2*m){
    printf("%lld\n",n);
  }
  else{
    printf("%lld\n",n+(m-n*2)/4);
  }
  return 0;
}
