#include<stdio.h>
#include<stdlib.h>
int main(){
  int N,M;
  scanf("%d%d",&N,&M);
  long int ab[100][2],cd[100][2];
  int i,j;
  for(i=0;i<N;i++){
    scanf("%ld",&ab[i]);
  }
  for(i=0;i<M;i++){
    scanf("%ld",&cd[i]);
  }
  int count[100]={0};
  for(i=0;i<N;i++){
    int min=50000;
    for(j=0;j<M;j++){
      if(min>(labs(ab[i][0]-cd[j][0])+labs(ab[i][1]-cd[j][1]))){
        min=labs(ab[i][0]-cd[j][0])+labs(ab[i][1]-cd[j][1]);
        count[i]=j+1;
      }
    }
  }
  printf("%ld\n",ab[0][0]);
  printf("%ld\n",ab[0][1]);
  for(i=0;i<N;i++){
    printf("%d\n",count[i]);
  }
}
