#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
  int N;
  scanf("%d\n",&N );
  int a[N];
  int count[100001]={0};
  int i;
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
    count[a[i]]++;
  }
  int max=0;
  int num=0;
  if(N>2){
    for(i=0;i<N-2;i++){
      num=count[i]+count[i+1]+count[i+2];
      if(num>max){
        max=num;
      }
    }
  }else if(N==2){
    if(abs(a[0]-a[1])<3){
      max=2;
    }
    else{
      max=1;
    }
  }else{
    max=1;
  }

  printf("%d",max);
}
