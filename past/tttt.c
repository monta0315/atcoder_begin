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
    if(x[i]!='0'){
      printf("%c\n",x[i]);
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
