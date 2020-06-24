#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=0; i <(n); i++)

int keta(long long n){
  int cnt=0;
  if(n%26==0){
    cnt=-1;
  }
  while(n>26){
    n=n/26;
    cnt++;
  }
  return cnt;
}

long long m(int cnt){
  long long n=0;
  while(cnt>0){
    n+=pow(26,cnt);
    cnt--;
  }
  return n;
}

int main(){
  long long n;
  scanf("%lld",&n);
  int cnt=(keta(n));
  long long num=n-m(cnt);
  while(num>0){
    if(num%26!=0){
      printf("%c",(num%26-1)+'a');
    }else{
      printf("z");
    }
    num=num/26;
  }
  printf("%c\n",num-'1');
  return 0;
}
