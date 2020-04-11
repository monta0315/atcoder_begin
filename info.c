#include<stdio.h>
int main(){
  int i,j;
  int c[3][3];
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&c[j][i]);
    }
  }
  int flag=0;
  int a[3];
  int b[3];
  a[0]=0;
  b[0]=c[0][0]-a[0];
  b[1]=c[0][1]-a[0];
  b[2]=c[0][2]-a[0];
  a[1]=c[1][0]-b[0];
  a[2]=c[2][0]-b[0];
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(c[j][i]!=a[j]+b[i]){
        flag=1;
        break;
      }
    }
  }
  if(flag==0){
    printf("Yes");
  }
  else {
    printf("No");
  }
}
