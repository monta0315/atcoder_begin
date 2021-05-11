#include<stdio.h>
#include<string.h>


int main(){

char str[50][3] = {};
int i;

for (i = 0; i < 50; i++) {
	scanf("%s",str[i]);
	printf("%s", str[i]);
}
  return 0;
}
