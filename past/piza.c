#include<stdio.h>
#include<stdlib.h>
int max_return(int x,int y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}

int min_return(int x,int y){
  if(x<y){
    return x;
  }else{
    return y;
  }
}

int cost_return(int x,int y,int a,int b){
  if(max_return(x,y)==x){
    return a;
  }
  else{
    return b;
  }
}

int main(){
  int A,B,C,X,Y;
  scanf("%d %d %d %d %d",&A,&B,&C,&X,&Y);
  int a,b;

  if((A+B)>2*C){
    a=C*2*min_return(X,Y)+abs(X-Y)*cost_return(X,Y,A,B);
    b=C*2*max_return(X,Y);
    if(a<b){
      printf("%d",a);
    }
    else{
      printf("%d",b);
    }
  }else{
    printf("%d",X*A+Y*B);
  }
}
