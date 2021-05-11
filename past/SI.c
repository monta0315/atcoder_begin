#include<stdio.h>
int main(){
  int a,b,c,max,mid,min,i,x_d,x_n,num,j,tmp;
  int cnt[3];
  scanf("%d%d%d",&a,&b,&c);
  cnt[0]=a;
  cnt[1]=b;
  cnt[2]=c;
  for(i=0;i<3;i++){
    for(j=i;j<3;j++){
      if(cnt[i]<cnt[j]){
        tmp=cnt[i];
        cnt[i]=cnt[j];
        cnt[j]=tmp;
      }
    }
  }
  max=cnt[0];
  mid=cnt[1];
  min=cnt[2];
  //printf("%d\n",cnt[0]);
  //printf("%d\n",cnt[1]);
  //printf("%d\n",cnt[2]);
  x_d=max-mid;
  x_n=max-min;
  if(x_d%2==x_n%2){
    num=x_d+(x_n-x_d)/2;
  }
  else{
    max+=1;
    min+=1;
    x_d=max-mid;
    x_n=max-min;
    num=1+x_d+(x_n-x_d)/2;
  }
  printf("%d\n",num);
  return 0;
}
