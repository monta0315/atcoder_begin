#include<stdio.h>
#include<string.h>
int main(){
  int N,M;
  scanf("%d",&N);
  char s[10000][11];
  char t[10000][11];
  int i,j;
  for(i=0;i<N;i++){
    scanf("%s",s[i]);
  }
  scanf("%d",&M);
  for(i=0;i<M;i++){
    scanf("%s",t[i]);
  }
  int cnt[10000]={0};
  for(i=0;i<N;i++){
    for(j=i;j<N;j++){
      if(strcmp(s[i],s[j])==0){
        cnt[i]++;
      }
      else if(strcmp(s[i],t[j])==0){
        cnt[i]--;
      }
    }
  }
  int max=0;
  for(i=0;i<N;i++){
    printf("%d\n",cnt[i]);
    if(max<cnt[i]){
      max=cnt[i];
    }
  }
  printf("%d\n",max);
  return 0;
}
