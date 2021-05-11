#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

int solve(string s){
  int sum = 0;
  rep(i, 3)
  {
    sum += s.at(i) - '0';
  }
  return sum;
}

int main(){
  string a, b;
  cin >> a >> b;
  out(max(solve(a),solve(b)));
}
