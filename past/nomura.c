#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int h1,m1,h2,m2,k;
  scanf("%d%d%d%d%d",&h1,&m1,&h2,&m2,&k);
  int num = h2*60+m2-h1*60-m1;
  printf("%d\n",num-k);
  return 0;
}
