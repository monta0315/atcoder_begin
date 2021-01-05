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
  string s;
  cin >> s;
  if (s == "SUN")
  {
    out(7);
  }
  else if (s == "MON")
  {
    out(6);
  }
  else if (s == "TUE")
  {
    out(5);
  }
  else if (s == "WED")
  {
    out(4);
  }
  else if (s == "THU")
  {
    out(3);
  }
  else if (s == "FRI")
  {
    out(2);
  }
  else
  {
    out(1);
  }
}
