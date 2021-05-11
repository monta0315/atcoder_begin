#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int main(){
  double n,m;
  scanf("%lf%lf",&n,&m);
  if(n>12){
    n=n-12;
  }
  double nang = n*30.0+m*0.5;
  double mang = m*6.0;
  if(nang>mang){
    printf("%lf\n",nang-mang);
  }else{
    printf("%lf\n",mang-nang);
  }
  return 0;
}
