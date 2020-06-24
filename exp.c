#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int compint(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}

int main(){
  int a,b,x;
  scanf("%d%d%d",&x,&a,&b);
  if(a>=b){
    printf("delicious\n");
    return 0;
  }else if(x+a>=b){
    printf("safe\n");
    return 0;
  }else{
    printf("dangerous\n");
    return 0;
  }
  return 0;
}
