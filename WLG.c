#include<stdio.h>
int main(){
  int K;
  int A,B;
  scanf("%d%d%d",&K,&A,&B);
  for(int i=0;i<1000;i++){
    if(K*i<=B&&K*i>=A){
      printf("OK");
      break;
      return 0;
    }
  }
  printf("NG");
  return 0;
}
