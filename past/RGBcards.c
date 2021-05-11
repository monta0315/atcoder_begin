int main(void){
  int r,g,b;
  int total;
  scanf("%d %d %d",&r,&g,&b);
  total=100*r+10*g+b;
  if(total%4==0){
    printf("YES");
  }else{
    printf("NO");
  }
}
