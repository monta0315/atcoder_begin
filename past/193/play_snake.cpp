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



int main(){
  int n;
  cin >> n;
  vector<ll> a(n), p(n), x(n);
  rep(i,n){
    cin >> a.at(i) >> p.at(i) >> x.at(i);
  }
  ll num = 1000000000;

  rep(i,n){
    if(a.at(i)<x.at(i)){
      num = min(num, p.at(i));
    }
  }

  if (num == 1000000000){
    out("-1");
  }
  else
  {
    out(num);
  }
}
//到着するまでにa(i)-0.5分かかるためこれよりx(i)の個数が少ないまたは等しい場合はその店では買えない
//上の条件を満たしたものを金額としてカウントしていき，満たしたiに対してmin関数を適用してく
