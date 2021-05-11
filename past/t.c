#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,i;
  int t[100001]={0};
  int x[100001]={0};
  int y[100001]={0};
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d%d",&t[i],&x[i],&y[i]);
  }
  for(i=0;i<n;i++){
    int dt=t[i+1]-t[i];
    int dist=abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
    if(dt<dist){
      printf("No\n");
      return 0;
    }
    if(dist%2!=dt%2){
        printf("No\n");
        return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
