#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl
#define twod(h, w) vector<vector<int>> v(h, vector<int>(w))
#define ctoi(c) c - '0'
#define getdigit(n) log10(n) + 1 //桁数
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
int main(){
  string s;
  cin >> s;
  vector<char>ans;
  ans.push_back(s.at(1));
  ans.push_back(s.at(2));
  ans.push_back(s.at(0));
  rep(i,3){
    cout<<ans.at(i);
  }
  out("");
}
