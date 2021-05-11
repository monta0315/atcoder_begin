#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  ll cnt = 1;
  rep(i, 8)
  {
    cnt *= 52;
  }
  out(cnt / 1000);
}
