#include<stdio.h>
int main(){
  long long x,b;
  long long a=100;
  scanf("%lld",&x);
  int cnt=0;
  while(a<x){
    b=a/100;
    a=a+b;
    cnt++;
  }
  printf("%d",cnt);
}
