#include<stdio.h>
#include<stdlib.h>
int flag1(int x,int y,int a,int b,int c){
  int ans;
  if(x>y){
    ans=y*c*2+(x-y)*a;
    if(x*c*2<ans){
      ans=x*c*2;
    }
  }
  else{
    ans=x*c*2+(y-x)*b;
    if(y*c*2<ans){
      ans=y*c*2;
    }
  }
  return ans;
}


int main(){
  int a,b,c,x,y;
  scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
  int flag;
  if((a+b)>2*c){
    flag=1;//Cを優先に買うべきパターン
  }else{
    flag=2;//Cを優先すべきでないパターン
  }
  if(flag==1){
    printf("%d",flag1(x,y,a,b,c));
  }
  else{
    printf("%d",x*a+y*b);
  }
  return 0;
}
