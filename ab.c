#include<stdio.h>
int main(){
  int i,N;
  int a[4801];
  int flag=0;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  int r[100]={0};
  int num=0;
  for(i=0;i<N;i++){
    if(a[i]<400){
      r[i]=1;
      flag=1;
    }
    else if(a[i]>=400&&a[i]<800){
      r[i]=2;
      flag=1;
    }
    else if(a[i]>=800&&a[i]<1200){
      r[i]=3;
      flag=1;
    }
    else if(a[i]>=1200&&a[i]<1600){
      r[i]=4;
      flag=1;
    }
    else if(a[i]>=1600&&a[i]<2000){
      r[i]=5;
      flag=1;
    }
    else if(a[i]>=2000&&a[i]<2400){
      r[i]=6;
      flag=1;
    }
    else if(a[i]>=2400&&a[i]<2800){
      r[i]=7;
      flag=1;
    }
    else if(a[i]>=2800&&a[i]<3200){
      r[i]=8;
      flag=1;
    }
    else{
      num++;
    }
  }
  int j,tmp;
  for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
      if(r[i]<r[j]){
        tmp=r[i];
        r[i]=r[j];
        r[j]=tmp;
      }
    }
  }
  int count =0;
  if(flag==1){
     count =1;
  }
  int min=0;
  int max=0;
  for(i=1;i<=N;i++){
    //printf("%d",r[i-1]);
    if(r[i]==0){
    }
    else if(r[i]<r[i-1]){
      count++;
    }
  }
  if((count+num)<=8){
    max=num+count;
  }
  else {
    max=8;
  }
  if(count>0){
    min=count;
  }
  else{
    min=1;
  }

  printf("%d %d",min,max);
}
