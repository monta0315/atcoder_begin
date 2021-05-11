#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i,j,len;
  char x[101];
  char tmp[101];
  scanf("%s",x);
  len=strlen(x);
  for(i=0;i<len;i++){
    for(j=i;j<len;j++){
      if(strcmp(&x[i],&x[j])>0){
        strcpy(tmp,&x[i]);
        strcpy(&x[i],&x[j]);
        strcpy(&x[j],tmp);
      }
    }
  }
  for(i=0;i<len;i++){
    printf("%c",x[i]);
  }
  printf("\n");
  for(i=0;i<len;i++){
    if(x[i]!='0'){
      strcpy(tmp,&x[i]);
      strcpy(&x[i],&x[0]);
      strcpy(&x[0],tmp);
      break;
    }
  }
  for(i=0;i<len;i++){
    printf("%c",x[i]);
  }
return 0;
}
