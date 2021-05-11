#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int i;
  int a[N];
  for(i=1;i<=N;i++){
    scanf("%d",&a[i]);
  }
  int num1=0;
  int count=0;
  for(i=1;i<=N;i++){
    num1=abs(a[i]-i);
    if(a[i]>i){
      count++;
    }
    else{
      count--;
    }
  }
  int min=50000;
  int total;
  for(i=0;i<N;i++){
    total=num1-i*count;
    if(min>total){
      min=total;
    }
  }
  printf("%d",min);

}
