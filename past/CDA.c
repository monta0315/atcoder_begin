#include<stdio.h>
int main(){
  int N;
  long int x;
  scanf("%d%ld",&N,&x);
  int i,j;
  unsigned int a[N];
  for(i=0;i<N;i++){
    scanf("%ld",&a[i]);
  }
  long int tmp;
  for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
      if(a[i]>a[j]){
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
      }
    }
  }
  int count=0;
  i=0;
  while(x>0&&a[i]!=0){
    x=x-a[i];
    //printf("%d",x);
    i++;
    count++;
  }
  if(x!=0){
    printf("%d",count-1);
  }
  else{
    printf("%d",count);
  }
}
