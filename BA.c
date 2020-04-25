#include<stdio.h>
#include<stdlib.h>

int cmpint(const void *a,const void *b){
  return *(int*)a-*(int*)b;
}

int main(){
  int N;
  long long K;
  scanf("%d%lld",&N,&K);
  int a[100000][2]={0};
  int i;
  for(i=0;i<N;i++){
    scanf("%d%d",&a[i][0],&a[i][1]);
  }//b[i]がa[i][1]になっている
  long long cnt=0;
  qsort(a,N,sizeof(a[0]),cmpint);
  for(i=0;i<N;i++){
    cnt+=a[i][1];
    if(cnt>=K){
      printf("%d",a[i][0]);
      break;
    }
  }
  return 0;

}
