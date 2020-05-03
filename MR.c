#include<stdio.h>
  int N,M,Q,max=0;
  int a[55],b[55],c[55],d[55];
  int A[15];
  int check(){
    int ans=0;
    for(int i=1;i<=Q;i++){
      if(A[b[i]]-A[a[i]]==c[i]){
        ans+=d[i];
      }
    }
    return ans;
  }//問題文の条件をチェックする、これをするためにA[i]を別のところで作成する必要がある
  void make(int i,int t){
    if(i==N+1){
      int x=check();//作成されたA[i]が長さNを満たした時関数checkに移行する
      if(x>max){
        max=x;
      }//返ってきたd[i]の総和をmaxと比較
      return ;
    }
    for(int j=t;j<=M;j++){//再帰でA[i]を作成している全探索の際に用いる？
      A[i]=j;
      make(i+1,j);
    }
  }
  int main(){
    scanf("%d%d%d",&N,&M,&Q);
    int i=1;
    for(i=1;i<=Q;i++){
      scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    make(1,1);
    printf("%d",max);
    return 0;
  }
