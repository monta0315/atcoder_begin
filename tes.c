#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int n;
  scanf("%d",&n);
  if(n<60){
    printf("Bad\n" );
  }else if(n<90){
    printf("Good\n" );
  }else if(n<100){
    printf("Great\n");
  }else{
    printf("Perfect\n");
  }
  return 0;
}
