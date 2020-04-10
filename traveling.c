#include<stdio.h>

int main(){
  int N,i;
  int x[100000]={0};
  int y[100000]={0};
  int t[100000]={0};

  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d %d %d",&t[i],&x[i],&y[i]);
  }//読み込み

  int flag =1;

  for(i=0;i<N;i++){
    int dt=t[i+1]-t[i];
    int dist =abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
    if(dt<dist){
      flag=0;
    }
    if(dist%2!=dt%2){
      flag=0;
    }
  }
  if(flag==1){
    printf("Yes");
  }
  else{
    printf("No");
  }

}
