#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int a[N];
  int i;
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  int min=a[0];
  int max=a[0];
  for(i=0;i<N;i++){
    if(max<a[i]){
      max=a[i];
    }
    if(min>a[i]){
      min=a[i];
    }
  }
  printf("%d",max-min);
}
