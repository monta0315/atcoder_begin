#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if((a+b)<24){
    printf("%d",a+b);
  }
  else{
    printf("%d",a+b-24);
  }
  return 0;
}
