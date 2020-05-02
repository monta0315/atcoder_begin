#include<stdio.h>
int main(){
  int N,M,Q;
  scanf("%d%d%d",&N,&M,&Q);
  int i;
  int a[51],b[51],c[51],d[51];
  for(i=0;i<Q;i++){
    scanf("%d\n",&a[i]);
    scanf("%d\n",&b[i]);
    scanf("%d\n",&c[i]);
    scanf("%d\n",&d[i]);
  }
  for(i=0;i<Q;i++){
    printf("%d\n",a[i]);
    printf("%d\n",b[i]);
    printf("%d\n",c[i]);
    printf("%d\n",d[i]);
  }
  return 0;
}
