#include<stdio.h>
int main(){
  long long a,b;
  int k,i;
  scanf("%lld%lld%d",&a,&b,&k);
  if((b-a)>=2*k){
    for(i=a;i<a+k;i++){
      printf("%d\n",i);
    }
    for(i=b-k+1;i<=b;i++){
      printf("%d\n",i);
    }
  }else{
    for(i=a;i<=b;i++){
      printf("%d\n",i);
    }
  }
  return 0;
}
