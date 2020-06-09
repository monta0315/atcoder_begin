#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<omp.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int main(){
  char s[100];
  int a[100];
  scanf("%s",s);
  int len = strlen(s);
  int count[100] = {0};

  rep(i,len){
    a[i] += s[i] -'a';
    count[a[i]]++;
  }

  rep(j,27){
    printf("%d",count[j]);
    if(count[j]>1){
      printf("%no\n");
      return 0;
    }
  }

  printf("yes\n");
  return 0;
}
