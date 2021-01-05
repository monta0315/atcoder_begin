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
  vector<string> s(n);
  rep(i,n){
    cin >> s.at(i);
  }
  for (int i = 0; i < n - 1;i++){
    for (int j = i + 1; j < n;j++){
      if("!"+s.at(i)==s.at(j)){
        out(s.at(i));
        exit(0);
      }
    }
  }
  out("satisfiable");
}
