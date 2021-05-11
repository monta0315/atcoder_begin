#include<stdio.h>
#include<math.h>
typedef long long ll;

int dim(ll a){
  int count=1;
  while(a>9){
    a=a/10;
    count++;
  }
  return count;
}//桁数を返す

int minrev(int a,int b){
  if(a>b){
    return a;
  }
  else{
    return b;
  }
}

int main(){
  ll N,a,b;
  int min=50000;
  scanf("%lld",&N);
  int num=0;
  for(int i=sqrt(N);i>0;i--){
    a=i;
    b=N/a;
    if(a*b==N){
      num=minrev(dim(a),dim(b));
      if(num<min){
      //printf("%lld %lld\n",a,b);
      //printf("%d %d\n",dim(a),dim(b));
      min=num;
      }
    }
  }
  printf("%d",min);
}
