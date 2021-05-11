#include<stdio.h>
#include<string.h>
int main(){
  int n;
  int a[100000];
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int ans=0;
  int count[100001];
  for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    if(a[i]<100001){
      count[a[i]]++;
    }
    else{
      ans++;
    }
  }
  for(i=0;i<100001;i++){
    printf("%d\n",ans);
    printf("%d\n",count[i]);
    if(count[i]<i){
      ans=ans+count[i];
    }
    else{
      ans=ans+count[i]-i;
    }
  }

  printf("%d",ans);

}
