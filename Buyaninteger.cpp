#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

ll solve(ll n){
  int num = 1;
  while(n>=10){
    n /= 10;
    num++;
  }
  return num;
}

int main(){
  long double a, b;
  ll x;
  cin >> a >> b>>x;
  if(x<b){
    out(0);
    exit(0);
  }
  ll num;
  for (int i = 1; i <= 18; i++)
  {
    num = (x / a) - (b * i) / a;
    if(solve(num)==i){
      if (num >= 1000000000)
      {
        out(1000000000);
      }
      else
      {
        out(num);
      }
      exit(0);
    }
  }
}
