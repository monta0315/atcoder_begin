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
  ll w, h,x,y;
  cin >> w >> h >> x >> y;
  bool mult = false;
  if(w==2*x&&h==2*y){
    mult = true;
  }
  long double area,center_x,center_y;
  center_x = w / 2.0;
  center_y = h / 2.0;
  if(x==y){
    cout << ((w / 2.0) * h);
  }
  else
  {
    long double a, b;
    a = (y - center_y) / (x - center_x);
    b = center_y - a * center_x;
    if(b>0&&b<h){
      cout << ((w / 2.0) * h);
    }
  }
  cout << " ";
  if (mult)
  {
    out(1);
  }
  else
  {
    out(0);
  }
}
