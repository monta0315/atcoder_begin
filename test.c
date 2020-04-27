#include<stdio.h>
#include<string.h>
int main(){
  char simon[50][3];
  char alice[]="DD";
  char a1[]="RU";
  char a2[]="WU";
  char a3[]="RD";
  char a4[]="WD";
  int i;
  for(i=0;i<50;i++){
    scanf("%s",simon[i]);
  }
  int flag=0;
  for(i=0;i<50;i++){
    if(strcmp(simon[i],a1)==0){
      if(alice[0]=='D'){
        alice[0]='U';
      }
      else{
        flag=1;
        break;
      }
    }
    else if(strcmp(simon[i],a2)==0){
      if(alice[1]=='D'){
        alice[1]='U';
      }
      else{
        flag=1;
        break;
      }
    }
    else if(strcmp(simon[i],a3)==0){
      if(alice[0]=='U'){
        alice[0]='D';
      }
      else{
        flag=1;
        break;
      }
    }
    else if(strcmp(simon[i],a4)==0){
      if(alice[1]=='U'){
        alice[1]='D';
      }
      else{
        flag=1;
        break;
      }
    }
  }
  if(flag==1){
    printf("Alice");
  }
  else{
    printf("Simon %c%c",alice[0],alice[1]);
  }
  return 0;
}
