#include<stdio.h>

int n;
long long k;
int a[200002];
int i;
int cnt[200002];
int num;
int ans=0;

int Te(int num,int *cnt){
  int new;
  new=a[num];
  cnt[num]++;
  return new;
}

int main(){
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  num=a[0];
  cnt[0]=1;
  do{
    Te(num,&cnt[num]);
    num=Te(num,&cnt[num]);
    ans++;
  }while(count[num]<2);
}
