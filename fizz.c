#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int i;
  unsigned long int count=0;
  for(i=0;i<N;i++){
    if(i%3!=0&&i%5!=0){
      count=count+i;
    }
  }
  printf("%lu",count);
}
