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
  string s;
  cin >> s;
  bool ans = true;
  for (int i = 0; i < s.length();i++)
  {
    if(i%2==0){
      if(isupper(s.at(i))){
        ans = false;
      }
    }else{
      if(islower(s.at(i))){
        ans = false;
      }
    }
  }
  if(ans){
    out("Yes");
  }else{
    out("No");
  }
}
