#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  long n;
  scanf("%ld",&n);
  if(n%2==0){
    printf("%ld\n",n-1);
  }else{
    printf("%ld\n",n+1);
  }
  return 0;
}
