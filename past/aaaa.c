#include<stdio.h>
#include<string.h>
int main(){
  int N,K;
  scanf("%d%d",&N,&K);
  int i;
  int j=0;
  int d[K];
  int count[10]={0};
  for(i=0;i<K;i++){
    scanf("%d",&d[i]);
    count[d[i]]++;
  }
  for(i=0;i<K;i++){
    printf("%d",count[i]);
  }
  printf("\n");
  int c[10]={0};
  int l=0;
  for(i=0;i<=10-K;i++){
    if(count[i]==0){
      c[j]=i;
      j=j+1;
    }
  }
  printf("%d%d",c[0],c[1]);//0,2ってでる
  int n[4]={0};
  j=0;
  printf("\n");
  do{
    N=N/10;
    n[j]=N;
    j++;
    printf("%d",n[j]);
  }while(N>10);

}
