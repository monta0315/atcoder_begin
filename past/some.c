#include<stdio.h>
int main(){
  char s[128];
  scanf("%s",s);
  int count=0;
  int i;
  for(i=0;s[i]!='\n';i++){
    if(s[i]=='o'){
      count++;
    }
  }
  printf("%d",700+count*100);
}
