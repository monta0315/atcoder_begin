#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int a[N];
  int i;
  int c4=0;
  int c=0;
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++){
    if(a[i]%4==0){
      c4++;
    }
    else if(a[i]%2!=0){
      c++;
    }
  }
  if(c4>=c){
    printf("Yes");
  }
  else{
    printf("No");
  }
}
