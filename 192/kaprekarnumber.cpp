#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl;
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

ll g2(ll a)
{
  vector<int> store;
  ll num = 0;
  while(a>0){
    store.push_back(a % 10);
    a /= 10;
  }
  sort(store.begin(), store.end(),greater<int>{});
  for (int i = store.size()-1; i >= 0;i--){
    num += store.at(i) * pow(10,i);
  }
  return num;
}

ll g1(ll a){
  vector<int> store;
  ll num = 0;
  while (a > 0)
  {
    store.push_back(a % 10);
    a /= 10;
  }
  sort(store.begin(),store.end());
  for (int i = store.size()-1; i >= 0; i--)
  {
    num += store.at(i) * pow(10,i);
  }
  return num;
}

ll func(ll a){
  ll num = g1(a) - g2(a);
  return num;
}

int main(){
  ll n, k;
  cin >> n >> k;
  rep(i,k){
    n = func(n);
  }
  out(n);
}
//g1を求める関数とg2を求める関数を作成する
//for文でk回まわす
//g1
//送られてきた数字を桁数ごとに分解
//並び替えして合体
