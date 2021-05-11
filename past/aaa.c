#include<stdio.h>
#include<string.h>

int main(){
  char q[50][3]={};
  int i;
  int flag=0;
  for(i=0;i<50;i++){
    scanf("%s",q[i]);
    printf("%s\n",q[i]);
  }
  char a1[]="RU";
  char a2[]="WU";
  char a3[]="RD";
  char a4[]="WD";
  char state[2]={'D','D'};
  for(i=0;i<3;i++){
    if(strcmp(q[i],a1)==0){
      if(state[0]!='U'){
        state[0]='U';
        flag=2;
      }
      else{
        flag=1;
        break;
      }
    }
    else if(strcmp(q[i],a2)==0){
      if(state[1]!='U'){
        state[1]='U';
      }
      else{
        flag=1;
        break;
      }
    }
    else if(strcmp(q[i],a3)==0){
      if(state[0]!='D'){
        state[0]='D';
      }
      else{
        flag=1;
        break;
      }
    }
    else{
      if(state[1]!='D'){
        state[1]='D';
      }
      else{
        flag=1;
        break;
      }
    }
  }
  printf("%d",flag );
  if(flag==1){
    printf("Alice");
  }
  else{
    printf("Simon\n %c%c",state[0],state[1]);
  }
  return 0;
}
