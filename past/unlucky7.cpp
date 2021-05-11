#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int check10(int k){
  if(k>=10){
    int num;
    while (k > 10)
    {
      num = k % 10;
      if (num == 7)
      {
        return 1;
      }
      k /= 10;
    }
  }else{
    if(k==7){
      return 1;
    }
  }
  return 0;
}
int check8(int k){
  if(k>=8){
    int num;
    while (k > 8)
    {
      num = k % 8;
      if (num == 7)
      {
        return 1;
      }
      k /= 8;
    }
  }else{
    if(k==7){
      return 1;
    }
  }
  return 0;
}

int main(){
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n;i++){
    if(check10(i)==0){
      if(check8(i)==0){
        cnt++;
      }
      else{
        out(i);
      }
    }else{
      out(i);
    }
  }
  out(cnt);
}
