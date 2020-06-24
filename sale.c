#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
#define N 5

void print(int graph[][]){
  rep(i,N){
    rep(j,N){
      printf("%8d",graph[i][j]);
    }
    printf("\n");
  }
}

void minsz1(int graph[][],int g){
  int min=100000;
  int x,y;
  rep(i,N){
    rep(j,N){
      if(min>graph[i][j]){
        min=graph[i][j];
        x=i;
        y=j;
      }
    }
  }
  printf("%d\n",min);
  g+=min;
  rep(k,N){
    rep(l,N){
      if(l==x||k==y){
        graph[l][k]=-500;
      }
    }
  }
}

void remake(int graph[][],int n){
  int regraph[n-1][n-1]={0};
  rep(i,N){
    rep(j,N){
      if(graph[i][j]!=-500){
        regraph[i][j]==graph[i][j];
      }
    }
  }
}

void minsz2(int graph[][],int g){
  rep(i,N){
    int min=10000;
    rep(j,N){
      if(graph[i][j]>=0&&graph[i][j]<min){
        min=graph[i][j];
      }
    }
    if(min==10000){
      min=0;
    }
    printf("%d\n",min);
    g+=min;
    rep(k,N){
      graph[i][k]=graph[i][k]-min;
    }
  }
  rep(l,N){
    int min2=10000;
    rep(m,N){
      if(graph[m][l]>=0&&min2>graph[m][l]){
        min2=graph[m][l];
      }
    }
    if(min2==10000){
      min2=0;
    }
    if(min2!=0){
      rep(n,N){
        graph[n][l]-=min2;
      }
      g+=min2;
    }
  }
  printf("%d\n",g);
}

int main(){
  int g=0;
  int graph[N][N];
  rep(i,N){
    rep(j,N){
      scanf("%d",&graph[i][j]);
    }
  }
  doit(5,graph,g1,g2);
  return 0;
}
