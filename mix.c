#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int compint(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}

int main(){
  int n,k;
  scanf("%d%d",&n,&k);
  int p[1002];
  rep(i,n){
    scanf("%d",&p[i]);
  }
  qsort(p,n,sizeof(int),compint);
  int sum=0;
  rep(j,k){
    sum+=p[j];
  }
  printf("%d\n",sum);
  return 0;
}
