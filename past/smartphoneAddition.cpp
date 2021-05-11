#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  long n, m, t;
  cin >> n >> m >> t;
  vector<int> a(m+1), b(m+1);
  a.at(0) = 0;
  b.at(0) = 0;
  long c = n;
  for (int i = 1; i <= m; i++)
  {
    cin >> a.at(i) >> b.at(i);
  }
  for (int i = 1; i <= m;i++)
  {
    c -= (a.at(i) - b.at(i - 1));
    if(c<=0){
      out("No");
      exit(0);
    }
    c += (b.at(i) - a.at(i));
    if(c>n){
      c = n;
    }
  }
  c -= (t - b.at(m));
  if (c <= 0)
  {
    out("No");
    exit(0);
  }
  out("Yes");
}
