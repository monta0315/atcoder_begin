#include<stdio.h>
#include<string.h>
int main(){
  char s[100001]={};
  scanf("%s\n",s );
  int i;
  for(i=0;i<strlen(s);i++){
    if(i!=0){
      printf("%c",s[i]);
    }
  }
}
