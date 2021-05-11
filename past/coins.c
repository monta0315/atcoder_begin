#include<stdio.h>
int main(){
  int N,A;
  int s;
  int i;
  scanf("%d",&N);
  scanf("%d",&A);
  while(s<500){
    s=N-500;
  }
  for(i=0;i<A;i++){
    if((s-i)==0){
      printf("Yes");
      break;
    }
    else{
      printf("No");
    }
  }

  return 0;
}
