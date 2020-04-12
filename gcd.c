#include<stdio.h>

int k_r(int a,int b){
  int tmp,r;
  if(a<b){
    tmp=a;
    a=b;
    b=tmp;
  }
  r=a%b;
  while(r!=0){
    a=b;
    b=r;
    r=a%b;
  }
return b;
}
int k_r2(int a,int b,int c){
  return k_r(k_r(a,b) , k_r(a,c));
}

int main(){
  int K;
  long int count=0;
  scanf("%d",&K);
  int i=1;
  int j=1;
  int l=1;
  for(i=1;i<K+1;i++){
    for(j=1;j<K+1;j++){
      for(l=1;l<K+1;l++){
        count=(count+k_r2(i,j,l))/(10^9+7);
      }
    }
  }
  printf("%ld",count);
}
