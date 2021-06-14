#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define fore(i,a) for(auto &a:a)
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
const long long INF = 1LL << 60;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}

ll g1(ll x){
  string s = to_string(x);
  sort(s.begin(),s.end(),greater<char>());
  return stol(s);
}

ll g2(ll x){
  string s = to_string(x);
  e(s);
  return stol(s);
}

ll f(ll x){
  return (g1(x) - g2(x));
}



int main(){
  ll n;cin>>n;
  ll k;cin>>k;
  ll ans;
  for(int i=0;i<k;i++){
    n = f(n);
  }
  out(n);
}
