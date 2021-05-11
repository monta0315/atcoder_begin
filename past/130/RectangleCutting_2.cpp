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
  ll w, h, x, y;
  cin >> w >> h >> x >> y;
  bool mult = false;
  if (w == 2 * x && h == 2 * y)
  {
    mult = true;
  }
  cout <<fixed<<setprecision(9)<< w * h / 2.0<<" ";
  if(mult){
    out(1);
  }
  else{
    out(0);
  }
}
