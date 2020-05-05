#include<stdio.h>
#include<string.h>
int main(){
  char s[101];
  int i,j,len;
  scanf("%s",s);
  len=strlen(s);
  int d[101];
  int tmp;
  for(i=0;i<len;i++){
    if('0'<=s[i]&&s[i]<='9'){
      d[i]=s[i]-'0';
    }
  }
  for(i=0;i<len;i++){
    printf("%d",d[i]);
  }
  for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
      if(d[i]>d[j]){
        tmp=d[i];
        d[i]=d[j];
        d[j]=tmp;
      }
    }
  }
  for(i=0;i<len;i++){
    if(d[i]!=0){
      tmp=d[i];
      d[i]=d[0];
      d[0]=tmp;
    }
  }
  for(i=0;i<len;i++){
    printf("%d",d[i]);
  }
}
