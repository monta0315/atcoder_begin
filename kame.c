#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  if(y%2==0){
    if(y<=x*4&&y>=x*2){
      printf("Yes\n");
      return 0;
    }
  }

  printf("No\n");
  return 0;
}
