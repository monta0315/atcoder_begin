#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int h,w;
  scanf("%d%d",&h,&w);
  char s[50][50];
  rep(i,h){
    rep(j,w){
      scanf("%c",&s[i][j]);
    }
  }
  rep(k,h){
    rep(l,w){
      printf("%c",s[k][l]);
    }
    printf("\n");
  }
  return 0;
}
