#include<stdio.h>
int main(){
  int N,Y,i,j,k;
  int flag=0;
  scanf("%d %d",&N,&Y);


  for(i=N;i>=0;i--){
    for(j=0;j<=N-i;j++){
      k=N-i-j;
        if(10000*i+5000*j+1000*k==Y){
          printf("%d %d %d",i,j,k);
          printf("\n");
          flag=1;
        }
     }
  }
  if(flag==0){
    printf("%d %d %d",-1,-1,-1);
  }
}
