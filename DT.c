#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(b>=a){
    printf("%d",a);
  }else{
    printf("%d\n",a-1);
  }
}
