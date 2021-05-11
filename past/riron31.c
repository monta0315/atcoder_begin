#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
#define N 4
#define COL 7
int a[N][N] = {{2,1,1,2},
               {1,0,0,1},
               {1,0,0,1},
               {2,1,1,0}};
int b[N][N] = {{0,2,2,1},
               {2,0,0,1},
               {2,0,0,1},
               {1,1,1,0}};

int pathlist[N][COL]={
  {1,1,2,3,4,4,0},
  {1,4,0},
  {1,4,0},
  {1,1,2,3,0}
};

int route[N];


void dfs(int start,int target){
  int i;
  route[start] = 1;
  printf("%d→",start);
  if(start==target){
    printf("Found target");
    return;
  }
  for(i=0;pathlist[start][i]!=0;i++){
    if(route[pathlist[start][i]]==0){
      dfs(pathlist[start][i],target);
    }
  }
}

int main(){
  int path[N][COL];
  rep(l,N){
    rep(m,COL){
      path[l][m]=0;
    }
  }

  rep(i,N){
    rep(j,N){
      if(a[i][j]>0){
        rep(k,a[i][j]+j){
          path[i][k]=j+1;
        }
      }
    }
  }
  rep(n,N){
    rep(o,COL){
      printf("%d",path[n][o]);
    }
    printf("\n");
  }
  return 0;
}
