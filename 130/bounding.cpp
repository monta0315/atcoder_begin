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
  int n,x;
  cin >> n>>x;
  vector<int> l(n);
  rep(i,n){
    cin >> l.at(i);
  }
  vector<int> d(n + 1);
  d.at(0) = 0;
  for (int i = 1; i <n + 1; i++)
  {
    d.at(i) = d.at(i - 1) + l.at(i - 1);
  }
  int num = 0;
  while (d.at(num) <= x)
  {
    num++;
    if(num==n+1){
      out(num);
      exit(0);
    }
  }
  out(num);
}
