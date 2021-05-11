#include<stdio.h>
int main(){
  int n,a;
  scanf("%d%d",&n,&a);
  int i=n/500;
  if(n-500*i<=a){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}
