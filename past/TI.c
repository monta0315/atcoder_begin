#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0;i<(n);i++)

int cmpint(const void *a,const void *b){
  return *(int *)b-*(int *)a;
}

int main(){
  int c[3][3];
  rep(i,3){
    //printf("\n");
    rep(j,3){
      scanf("%d",&c[i][j]);
      //printf("%d",c[i][j]);
    }
  }
  int a[3],b[3];
  a[0]=0;
  rep(j,3){
    b[j]=c[0][j]-a[0];
    if(j>0){
      a[j]=c[j][0]-b[0];
    }
  }
  rep(i,3){
    rep(j,3){
      if(c[i][j]!=a[i]+b[j]){
        printf("No\n");
        return 0;
      }
    }
  }
  printf("Yes\n");
  return 0;
}
