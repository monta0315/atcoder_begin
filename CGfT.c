#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0;i<(n);i++)

int cmpint(const void *a,const void *b){
  return *(int *)b-*(int *)a;
}

int main(){
  int n;
  int a[100];
  scanf("%d",&n);
  rep(i,n){
    scanf("%d",&a[i]);
  }
  qsort(a,n,sizeof(a[0]),cmpint);
  int alice=0;
  int bob=0;
  rep(i,n){
    if(i%2==0){
      alice+=a[i];
    }else{
      bob+=a[i];
    }
  }
  printf("%d\n",alice-bob);
  return 0;
}
