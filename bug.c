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
  int n;
  int s[101];
  int count=0;
  scanf("%d",&n);
  rep(i,n){
    scanf("%d",&s[i]);
  }
  qsort(s,n,sizeof(int),compint);
  rep(j,n){
    count+=s[j];
  }
  int k=0;
  while(count%10==0&&k<n){
    count-=s[k];
    k++;
  }
  printf("%d\n",count);
  return 0;
}
