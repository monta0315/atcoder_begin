#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ac = a * c;
  ll ad = a * d;
  ll bc = b * c;
  ll bd = b * d;
  ll ans = max(max(ac, ad), max(bc, bd));
  out(ans);
}
