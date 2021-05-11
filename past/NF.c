#include<stdio.h>
#include<string.h>

int main(){

  char S[100000];
  int check[27] = {0};
  scanf("%s",S);

  int len = strlen(S);

  for(int i=0; i<len; i++){
    check[S[i]-'a']++;
  }
  for(int i=0;i<len;i++){
    printf("%c",check[i]);
  }

  for(int j=0; j<26; j++){
    if(check[j] == 0){
      printf("%c",'a'+j);
      return 0;
    }
  }

  printf("None");

  return 0;

}
