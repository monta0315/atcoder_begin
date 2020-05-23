#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0; i <(n); i++)
int main(){
  int a,b,c,d,e;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  int s[5]={a,b,c,d,e};
  rep(j,5){
    printf("%d",s[j]);
  }
  int count[20];
  rep(s,1<<5){//便宜的にsを使用し、2^nの探索をするforを作成している
    int sum=0;
    int cnt=0;
    rep(i,5){
      //if(s>>i&1){//iビット目が１だった場合
        //sum+=s[i];

      }
    }
}
