#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  if(x>y){
    printf("Worse\n" );
  }else{
    printf("Better\n");
  }
  return 0;
}
