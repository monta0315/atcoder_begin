#include<stdio.h>
#include<string.h>
int main(){
  char s[100001];
  scanf("%s",s);
  int i;
  int count[27]={0};
  for(i=0;i<strlen(s);i++){
    count[s[i]-'a']++;
  }
  for(i=0;i<strlen(s);i++){
    printf("%d",count[i]);
  }
  for(i=0;i<27;i++){
    if(count[i]==0){
      printf("%c",i+'a');
      return 0;
    }
  }
  printf("None");
  return 0;

}
