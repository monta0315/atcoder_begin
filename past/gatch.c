#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a,const void *b){
  return strcmp(a,b);
}

int main(){
  int N;
  char s[200001][11];
  scanf("%d",&N);
  int i;
  for(i=0;i<N;i++){
    scanf("%s",s[i]);
  }
  int count=1;
  qsort(s,N,sizeof(*s),compare);
  for(i=0;i<N-1;i++){
    if(strcmp(s[i],s[i+1])!=0){
      count++;
    }
  }
  printf("%d",count);
}
