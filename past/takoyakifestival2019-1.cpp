#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  int n;
  cin >> n;
  vector<int> d(n);
  ll ans = 0;
  rep(i,n){
    cin >> d.at(i);
  }
  for (int i = 0; i < n - 1;i++){
    for (int j = i + 1; j < n;j++){
      ans += d.at(i) * d.at(j);
    }
  }
  out(ans);
}
