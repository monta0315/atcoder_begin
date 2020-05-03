#include<stdio.h>//数をint型で比較するのではなく、文字列として比較する
#include<string.h>
int main(){
  char a[102],b[102];//与えられた数字を文字列として受け取るための箱
  scanf("%s%s",a,b);
  int al=strlen(a);//文字列として受け取ったが故の桁数の考えやすさ
  int bl=strlen(b);
  if(al>bl){//strlenで計算した桁数で比較する
    printf("GREATER");
    return 0;
  }else if(al<bl){
    printf("LESS");
    return 0;
  }else{
    if(strcmp(a,b)>0){//同じ桁数だった場合strcmpで比較することで大小を判別できる
      printf("GREATER");
      return 0;
    }
    else if(strcmp(a,b)<0){
      printf("LESS");
      return 0;
    }else{
      printf("EQUAL");
      return 0;
    }
  }
}
