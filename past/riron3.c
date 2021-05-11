#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
#define N 4

int b[N][N] = {{2,1,1,2},
               {1,0,0,1},
               {1,0,0,1},
               {2,1,1,0}};
int a[N][N] = {{0,2,2,1},
               {2,0,0,1},
               {2,0,0,1},
               {1,1,1,0}};

int v[N][N];
int last;
void dfs(int i,int j){
  if(a[i][j]-v[i][j]>0){
    printf(" %c->%c",i+65,j+65);
    v[i][j]++;
    v[j][i]++;
    dfs(j,i);
    last = j;
  }else{
    rep(k,N){
      if(a[i][k]-v[i][k]>0){
        dfs(i,k);
      }
    }

  }
}
int main(){
  rep(n,N){
    rep(o,N){
      v[n][o]=0;
    }
  }
  dfs(0,0);
  printf("\n");
  rep(l,N){
    rep(m,N){
      if(a[l][m]-v[l][m]!=0){
        printf("オイラー閉路ではありません");
        return 0;
      }
    }
  }
  if(last!=0){
    printf("オイラー小道ではある");
  }else{
    printf("オイラー閉路です");
  }
  return 0;
}
