#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
  char a[202],b[101];
  scanf("%s%s",a,b);
  strcat(a,b);
  int i;
  int len=strlen(a);
  for(i=0;i<len;i++){
    a[i]=a[i]-'0';
    //printf("%d\n",a[i]);
  }
  int num=1;
  for(i=0;i<len-1;i++){
    num=num*10;
  }
  //printf("%d\n",num);
  int sum=0;
  for(i=0;i<len;i++){
    sum+=a[i]*num;
    num=num/10;
  }
  //printf("%d\n",sum);
  int c =(int)sqrt((double)sum);
  //printf("%d\n",c);
  if(c*c==sum){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
