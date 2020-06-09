#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int main (){
  double a,b,c,d;
  scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
  double takahashi=b/a;
  double aoki=d/c;
  if(takahashi>aoki){
    printf("TAKAHASHI\n");
  }else if(takahashi==aoki){
    printf("DRAW\n");
  }else{
    printf("AOKI\n");
  }
  return 0;

}
