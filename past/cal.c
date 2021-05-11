#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define rep(i,n) for(int i=1; i <(n); i++)
#define N 5
int main(){
  double p;
  double x=1;
  rep(i,5){
    x*=i;
    p+=0.08*pow(2.5,i)/x;
  }
  printf("%lf\n",1-p);
}
