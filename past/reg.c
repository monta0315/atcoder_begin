#include<stdio.h>
#include<string.h>
int main(){
  char s[11],t[12];
  scanf("%s%s",s,t);
  int i;

  for(i=0;i<strlen(s);i++){
    printf("%c",s[i]);
    printf("%c\n",t[i]);
    if(s[i]!=t[i]){
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}
