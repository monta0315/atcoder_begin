#include<stdio.h>
int N,M,Q,i;
int max=0;
int a[51],b[51],c[11],d[11],A[11];
int search(){
  for(i=0;i<Q;i++){
    int count=0
    if(A[b[i]]-A[a[i]]==c[i]){
      count+=d[i];
    }
  }
  return count;
}

void make(int i,int t){
  if(i==N+1){
    int x=search();
    if(x>max){
      max=x;
    }
  }
  for(int j=t,j<=M;j++){
    A[i]=j;
    make(i+1,t);
  }
}

int main(){
  int i=1;
  scanf("%d%d%d",&N,&M,&Q);
  for(i=1;i<=Q;i++){
    scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
  }
  make(1,1);
  prtint("%d",count);
  return 0;


}
