#include<stdio.h>
int main(){
  int n,m,i,j;
  char s[32][32];
  int s_x,s_y,g_x,g_y,d_x,d_y;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++){
    scanf("%s",s[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(s[i][j]=='S'){
        //printf("%d%d",i,j);
        s_x=j;
        s_y=i;
      }
      else if(s[i][j]=='G'){
       // printf("%d%d",i,j);
        g_x=j;
        g_y=i;
      }
    }
  }
  d_x=g_x-s_x;
  d_y=g_y-s_y;
  int count1=0;
  int kabe=0;
  if(d_x>0){
    for(i=s_x+1;i<=g_x;i++){
      if(s[s_y][i]=='.'){
        count1++;
      }
      else if(s[s_y][i]=='#'){
        count1=count1+kabe+1;
        kabe++;
      }
      else{
        count1++;
      }
    }
  }
  else if(d_x<0){
    for(i=s_x-1;i<=g_x;i--){
      if(s[s_y][i]=='.'){
        count1++;
      }
      else if(s[s_y][i]=='#'){
        count1=count1+kabe+1;
        kabe++;
      }
      else{
        count1++;
      }
    }
  }
  if(d_y>0){
    for(i=s_y+1;i<=g_y;i++){
      if(s[i][g_x]=='.'){
        count1++;
      }
      else if(s[i][g_x]=='#'){
        count1=count1+kabe+1;
        kabe++;
      }
      else{
        count1++;
      }
    }
  }else if(d_y<0){
    for(i=s_y-1;i<=g_y;i--){
      if(s[i][g_x]=='.'){
        count1++;
      }
      else if(s[i][g_x]=='#'){
        count1=count1+kabe+1;
        kabe++;
      }
      else{
        count1++;
      }
    }
  }
  int count2=0;
  kabe=0;
  if(d_y>0){
    for(i=s_y+1;i<=g_y;i++){
      if(s[i][s_x]=='.'){
        count2++;
      }
      else if(s[i][s_x]=='#'){
        count2=count2+kabe+1;
        kabe++;
      }
      else{
        count2++;
      }
    }
  }else if(d_y<0){
    for(i=s_y-1;i<=g_y;i--){
      if(s[i][s_x]=='.'){
        count2++;
      }
      else if(s[i][s_x]=='#'){
        count2=count2+kabe+1;
        kabe++;
      }
      else{
        count2++;
      }
    }
  }
  if(d_x>0){
    for(i=s_x+1;i<=g_x;i++){
      if(s[g_y][i]=='.'){
        count2++;
      }
      else if(s[g_y][i]=='#'){
        count2=count2+kabe+1;
        kabe++;
      }
      else{
        count2++;
      }
    }
  }
  else if(d_x<0){
    for(i=s_x-1;i<=g_x;i--){
      if(s[g_y][i]=='.'){
        count2++;
      }
      else if(s[g_y][i]=='#'){
        count2=count2+kabe+1;
        kabe++;
      }
      else{
        count2++;
      }
    }
  }
  if(count1>count2){
    printf("%d",count2);
  }else{
    printf("%d",count1);
  }
  return 0;
}
