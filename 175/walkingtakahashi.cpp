#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

ll solve(ll x,ll d){
  if(abs(x-d)<abs(x+d)){
    return abs(x - d);
  }
  else
  {
    return abs(x + d);
  }
}

int main(){
  ll x, k, d;
  cin >> x >> k >> d;
  vector<ll> store;
  //こっから２個前の値と同じ値がリターンされるまでwhile文で回し続ける
  int i = 0;
  while (k>0)
  {
    x = solve(x, d);
    store.push_back(x);
    if (i > 2)
    {
      if(store.at(i-2)==store.at(i)){
        out(x);
        exit(0);
      }
    }
    i++;
    k--;
  }
  out(x);
}
