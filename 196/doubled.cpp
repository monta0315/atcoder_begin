#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl
#define ctoi(c) c - '0'
#define getdigit(n) log10(n) + 1 //桁数
#define twod(h, w) vector<vector<int>> v(h, vector<int>(w))
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

int c=0;

void solve(int num,ll n){
  int digit = getdigit(num);
  ll ans = num*pow(10,digit);
  ans+=num;
  if (ans<=n){
     c++;
  }
}

int main(){
  ll n;
  cin>>n;
  int ans=0;
  for(int i=1;i<=sqrt(n);i++){
    solve(i,n);
  }
  out(c);
}
