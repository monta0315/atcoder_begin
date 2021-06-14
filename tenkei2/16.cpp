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
int main(){
  ll n;cin>>n;
  ll a;cin>>a;
  ll b;cin>>b;
  ll c;cin>>c;
  ll ans = 10000;
  for(ll i=0;i<10000;i++){
    for(ll j=0;j<10000-i;j++){
      ll num = n-(a*i+b*j);
      if(num%c==0&&num>=0){
        ans = min(ans,i+j+num/c);
      }
    }
  }
  out(ans);
}
//硬貨の枚数の最小値を求めるループを9999回回し、10^8ループで解決
