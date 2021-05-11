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
  int a,b;
  cin>>a>>b;
  if(a+b>=15&&b>=8){
    out(1);
  }else if(a+b>=10&&b>=3){
    out(2);
  }else if(a+b>=3){
    out(3);
  }else {
    out(4);
  }
}
