#include<stdio.h>
int main(){
  int A,B,K,i;
  int count[202];
  scanf("%d%d%d",&A,&B,&K);
  for(i=0;i<K;i++){
    count[A+i]++;
  }
  for(i=B-K+1;i<=B;i++){
    count[i]++;
  }
  for(i=0;i<K*2;i++){
    if(count[i]!=0){
      printf("%d\n",count[i]);
    }
  }
  return 0;
}
