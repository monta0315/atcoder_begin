#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0; i <(n); i++)
#define ROW 4
#define COL 5
int route[ROW];
int pathList[ROW][COL];

void initRoute(){
  rep(k,ROW){
    route[k]=0;
  }
}
int flag=0;
void dfs(int start,int target){
  route[start]=1;
  printf("%d→",start);
  if(start==target){
    printf("FOUND TARGET");
    flag=1;
  }
  for(int l=0;pathList[start][l]!=0;l++){
    if(route[pathList[start][l]]==0){
      dfs(pathList[start][l],target);
    }
  }
}

int main(){
  rep(i,ROW){
    rep(j,COL){
      scanf("%d",&pathList[i][j]);
    }
  }
  initRoute();
  dfs(1,6);
  if(flag==0){
    printf("解なし");
  }
  return 0;
}
