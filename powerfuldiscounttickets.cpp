#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;


int main(){
  int n, m;
  cin >> n >> m;
  vector<long> a(n);
  ll ans = 0;
  rep(i, n)
  {
    cin >> a.at(i);
  }
  all(a);
  rev(a);
  rep(i, m)
  {
    a.at(0) = a.at(0) / 2;
    if(a.at(0)<a.at(1)){
      swap(a.at(0), a.at(1));
    }
  }
  rep(i,n){
    ans += a.at(i);
    out(a.at(i));
  }
  out(ans);
}
//値段の配列を大きい順に並び替える
//ループで割引券の枚数分だけ回す
//割引券の枚数だけmaxの値を二分の一するアルゴリズム
