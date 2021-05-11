#include <stdio.h>
#define N 3

int a[N][N]={{2,1,0},
             {0,2,1},
             {0,0,2}};
int a2[N][N]={0};
int a4[N][N]={0};
int a8[N][N]={0};

void mul(int x[N][N], int y[N][N], int z[N][N]) {
  int i,j,k;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      for(k=0;k<N;k++){
        z[i][j]+=x[i][k]*y[k][j];
      }
    }
  }
}

void print(int z[N][N]) {
  int i, j;

  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      printf("%5d ", z[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main(void) {
  mul(a,a,a2);
  printf("a2:\n");
  print(a2);
  mul(a2,a2,a4);
  mul(a4,a4,a8);
  printf("a8:\n");
  print(a8);

  return 0;
}
