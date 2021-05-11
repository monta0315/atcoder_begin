#include<stdio.h>
int main(){
  int n,x,y,i,count;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    x+=800;
    count++;
    if(count%15==0){
      y+=200;
    }
  }
  printf("%d\n",x-y);
}
