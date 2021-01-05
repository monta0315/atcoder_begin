#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  long a, b;
  cin >> a >> b;
  if(a<b){
    swap(a, b);
  }
  //aの方が大きい値を持っていてほしい
  vector<long> s;
  int ans = 0;
  s.push_back(1);
  for (int i = 2; i <= sqrt(a); i++)
  {
    if(a%i==0){
      int c = a / i;
      if (b % i == 0)
      {
        s.push_back(i);
      }
      if (b %c==0){
        s.push_back(c);
      }
    }
  }
  for (int n = 0; n < s.size()-1;n++){
    for (int m = n + 1; m < s.size();m++){
      if(gcd(s.at(n),s.at(m))==1){
        ans++;
      }
    }
  }
  out(ans);
}
//全部の約数を出す方針でいく
//小さい方の数に平方根をつけたものでループを回し
//お互いに割れたものを配列に格納する
