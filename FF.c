#include<stdio.h>
int main(){
  long long A,B,N,x;
  scanf("%lld %lld %lld",&A,&B,&N);
  if(N>B){
    x=B;
  }else{
    x=N;
  }
  int max=0;
  int num;
  if(x<1000000){
    while(x>0){
      num=(A*x)/B - A*(x/B);
    //printf("%lld\n",num );
      if(num>max){
        max=num;
      }
      x--;
    }
  }else{
    while(x-1000000>0){
      num=(A*x)/B - A*(x/B);
    //printf("%lld\n",num );
      if(num>max){
        max=num;
      }
      x--;
    }
  }
  printf("%d",max);
}
