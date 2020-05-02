#include<stdio.h>
int main(){
  long long A,B,N,x;
  scanf("%lld %lld %lld",&A,&B,&N);
  if(N>B){
    x=B;
  }else{
    x=N;
  }
  int max;
  int num;
  max=(A*x)/B - A*(x/B);
  printf("%d",max);
}
