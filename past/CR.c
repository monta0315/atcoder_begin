#include<stdio.h>
int main(){
  int N,M;
  scanf("%d %d",&N,&M);
  int a[M];
  int b[M];
  int i;
  int count[50]={0};
  for(i=0;i<M;i++){
    scanf("%d %d",&a[i],&b[i]);
    count[a[i]-1]++;
  }
  for(i=0;i<M;i++){
    count[b[i]-1]++;
  }
  for(i=0;i<N;i++){
    printf("%d\n",count[i]);
  }
  return 0;
}
