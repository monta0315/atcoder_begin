#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

ll powmod(ll x,ll y){
  ll num = 1;
  rep(i,y){
    num = num * x % MOD;
  }
  return num;
}

int main()
{
  ll n;
  cin >> n;
  ll ans = powmod(10, n) - powmod(9, n) -powmod(9,n) + powmod(8, n);
  ans %= MOD;
  ans = (ans + MOD) % MOD;
  out(ans);
}
//A.at(i)が0にも9にもならないものの数を全体から引く
