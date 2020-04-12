#include<stdio.h>
int main(){
  int N,X;
  int m[1000];
  int i;
  scanf("%d %d",&N,&X);
  for(i=0;i<N;i++){
    scanf("%d\n",&m[i]);
  }
  int total=0;
  int min=m[0];
  for(i=0;i<N;i++){
    total=total+m[i];
    if(min>m[i]){
      min=m[i];
    }
  }
  int count=(X-total)/min;
  printf("%d",N+count);
}
