#include<stdio.h>
#include<string.h>
#define int i;
#define int flag;

char *rev(char *v) {
  char tmp;
  for(i=0;i<strlen(v)/2;i++){
    tmp=v[i];
    v[i]=v[strlen(v)-i-1];
    v[strlen(v)-i-1]=tmp;
  }
  return v;
}//文字列反転

char *judge(char *v,char *e){
  for(i=0;i<strlen(e);i++){
    if(v[i]!=e[i]){
      break;
      flag=0;
    }
    flag=1;
  }
  return flag;
}//一致判定

char *trans(char *v,char *e){
  for(i=0;i<(strlen(v)-strlen(e);i++){
    v[i]=v[i+strlen(e)];
  }
  return v;
}//書き換え

char *end(char *v,char *e){
  for(i=0;i<strlen(v);i++){
    if(v[i]==e[i]){
      flag=2;
    }else{
      flag=1;
    }
  }
  return flag;
}

int main(){
  char v[100000]={0};
  char a[]="erase";
  char b[]="eraser";
  char c[]="dream";
  char d[]="dreamer";
  scanf("%s",$v);

 v=rev(v);
 a=rev(a);
 b=rev(b);
 c=rev(c);
 d=rev(d);

 do{
   if(judge(v,a)==1){
     trans(v,a);
     if(strlen(v)==strlen(a)){
       if(end(v,a)==2){
         printf("YES");
       }
     }else{
       flag=0;
       break;
     }
   }
   if(judge(v,b)==1){
     trans(v,b);
     if(strlen(v)==strlen(b)){
       flag=1;
     }else{
       flag=0;
       break;
     }
   }
   if(judge(v,c)==1){
     trans(v,c);
     if(strlen(v)==strlen(c)){
       flag=1;
     }else{
       flag=0;
       break;
     }
   }
   if(judge(v,d)==1){
     trans(v,d);
     if(strlen(v)==strlen(d)){
       flag=1;
     }else{
       flag=0;
       break;
     }
   }
 }while(flag==0);

 if(flag==1){
   for(i)
   printf("YES");
 }
 if(strlen(v)<5){
   printf("NO");
 }
  return 0;
}
