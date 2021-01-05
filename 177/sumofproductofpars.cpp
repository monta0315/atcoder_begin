#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
int main(){
  int n;
  cin >> n;
  vector<long> a(n);
  rep(i,n){
    cin >> a.at(i);
  }
  ll sum = 0;
  for (int i = 0; i < n-1;i++){
    for (int j = i + 1; j < n;j++){
      sum %= MOD;
      sum += a.at(i) % MOD * a.at(j) % MOD;
    }
  }
  out(sum);
}
