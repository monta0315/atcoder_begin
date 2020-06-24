#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int compint(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}

long kj(int n){
  long sum=1;
  while(n>0){
    sum*=n;
    n--;
  }
  return sum;
}

int main(){
  int n,m;
  long ans=0;
  scanf("%d%d",&n,&m);
  if(abs(n-m)>1){
    printf("%d\n",0);
    return 0;
  }
  if(n==m){
    ans=kj(n)*kj(m);
    printf("%ld\n",2*ans);
  }else{
    ans=kj(n)*kj(m);
    printf("%ld\n",ans);
  }
  return 0;
}
