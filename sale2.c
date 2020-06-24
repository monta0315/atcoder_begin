#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)
#define N 5

void print(int num,int graph[num][num]){
  rep(i,num){
    rep(j,num){
      printf("%8d",graph[i][j]);
    }
    printf("\n");
  }
}

int minsz1(int num,int graph[num][num],int g){
  int min=100000;
  int x,y;
  rep(i,num){
    rep(j,num){
      if(min>graph[i][j]){
        min=graph[i][j];
        x=i;
        y=j;
      }
    }
  }
  g+=min;
  rep(k,num){
    rep(l,num){
      if(l==x||k==y){
        graph[l][k]=-500;
      }
    }
  }
  return g;
}

void minmil(int num,int graph[num][num]){
  int min=100000;
  int x,y;
  rep(i,num){
    rep(j,num){
      if(min>graph[i][j]){
        min=graph[i][j];
        x=i;
        y=j;
      }
    }
  }
  graph[x][y]=10000;
}

void gz(int num,int graph[num][num]){
  int tmp;
  rep(i,num-1){
    rep(j,num-1){
      if(graph[i][j]<0){
        tmp=graph[i][j+1];
        graph[i][j+1]=graph[i][j];
        graph[i][j]=tmp;
      }
    }
  }
  rep(k,num-1){
    rep(l,num-1){
      if(graph[l][k]<0){
        tmp=graph[l+1][k];
        graph[l+1][k]=graph[l][k];
        graph[l][k]=tmp;
      }
    }
  }
}

void remake(int num,int graph[num][num],int regraph[num-1][num-1]){
  rep(i,num){
    rep(j,num){
      regraph[i][j]=graph[i][j];
    }
  }
}

int minsz2(int num,int graph[num][num],int g){
  rep(i,num){
    int min=10000;
    rep(j,num){
      if(graph[i][j]<min){
        min=graph[i][j];
      }
    }
    g+=min;
    rep(k,num){
      graph[i][k]=graph[i][k]-min;
    }
  }
  rep(l,num){
    int min2=10000;
    rep(m,num){
      if(min2>graph[m][l]){
        min2=graph[m][l];
      }
    }
    if(min2!=0){
      rep(n,N){
        graph[n][l]-=min2;
      }
      g+=min2;
    }
  }
  return g;
}

void copy(int num,int graph[num][num],int copy[num][num]){
  rep(i,num){
    rep(j,num){
      copy[i][j]=graph[i][j];
    }
  }
}
int a=0;
int count=5;
void doit(int num,int graph[num][num],int g1,int g2){
  int copyg[num][num];
  int copyd[num-1][num-1];
  int copyd2[num-1][num-1];
  int copyg2[num][num];
  copy(num,graph,copyg);
  minmil(num,copyg);
  g2=minsz2(num,copyg,g2);

  g1+=minsz1(num,graph,g1);
  a+=g1;
  gz(num,graph);
  remake(num,graph,copyd);
  copy(num-1,copyd,copyd2);
  g1=minsz2(num-1,copyd,g1);
  //print(num-1,copyd2);
  //print(num,copyg);


  while(count>0){
    if(g1<g2){
      printf("g1=%d g2=%d g1の方がコストが軽いです。\n",g1,g2);
      num-=1;
      g1=a;
      g2=a;
      doit(num,copyd2,g1,g2);
    }else{
      printf("g1=%d g2=%d g2の方がコストが軽いです。\n",g1,g2);
      g1=a;
      g2=a;
      doit(num,copyd2,g1,g2);
    }
    count-=1;
  }
}

int main(){
  int g1=0;
  int g2=0;
  int graph[N][N];
  rep(i,N){
    rep(j,N){
      scanf("%d",&graph[i][j]);
    }
  }
  doit(5,graph,g1,g2);
  //printf("%d\n",g2);
  //print(5,graph5);
  //print(4,graph4);
  //printf("%d\n",g1);
  return 0;
}
