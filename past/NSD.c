#include<stdio.h>
#include<stdlib.h>

int cmpint(const void *a,const void *b){
  return *(int *)a - *(int *)b;
}

int main(){
  int N,K;
  int A[200001];
  scanf("%d%d",&N,&K);
  int i;
  int cnt[200001];
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
    cnt[A[i]]++;
  }
  for(i=0;i<N;i++){
    printf("%d\n",cnt[i]);
  }
  qsort(cnt,N,sizeof(A[0]),cmpint);
  for(i=0;i<N;i++){
    printf("%d\n",cnt[i]);
  }
  int num=0;
  for(i=0;i<N-K;i++){
      num+=cnt[i];
    }
  printf("%d\n",num);
}
