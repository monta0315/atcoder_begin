#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=1; i <(n); i++)
int main(){
  int x,k;
  scanf("%d",&x);
  if(360%x==0){
    printf("%d\n",360/x);
  }else if(360%(180-x)==0){
    k=180-x;
    printf("%d\n",360/k);
  }else{
    int p=360/x;
    int s=360-p*x;
    printf("%d\n",s*360/s;
  }
  return 0;
}
