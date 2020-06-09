#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<omp.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if((a+b)>=10){
    printf("error\n");
  }else{
    printf("%d\n",a+b);
  }
  return 0;
}
