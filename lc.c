#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int a,b,c,d,e;
  a=N/100;
  b=N-a*100;
  c=b/10;
  d=b-c*10;
  if(a==7){
    printf("Yes");
  }
  else if(c==7){
    printf("Yes");
  }
  else if(d==7){
    printf("Yes");
  }
  else{
    printf("No");
  }
}
