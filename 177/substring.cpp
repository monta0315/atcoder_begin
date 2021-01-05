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
  string s, t;
  cin >> s >> t;
  int len_s = s.length();
  int len_t = t.length();
  int cnt = 0;
  for (int i = 0; i <=len_s-len_t; i++)
  {
    int num = 0;
    for (int j = 0; j < len_t; j++)
    {
      if(s.at(i+j)==t.at(j)){
        num++;
      }
    }
    cnt = max(num,cnt);
  }
  out(len_t-cnt);
}
