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
  int v, t, s, d;
  cin >> v >> t >> s >> d;
  bool ans = false;
  if(d<v*t){
    ans = true;
  }else if(d>v*s){
    ans = true;
  }
  if (ans){
    out("Yes");
  }else{
    out("No");
  }
}
