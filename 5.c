#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int a[5];
  rep(i,5){
    scanf("%d",&a[i]);
    if(a[i]==0){
      printf("%d\n",i+1);
    }
  }
  return 0;
}
