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
  unsigned long long a;cin>>a;
  unsigned long long b;cin>>b;
  unsigned long long g = __gcd(a,b);
  unsigned long long POW18 = 1000000000000000000LL;
  ll c = a/g;
  if(c>POW18/b){
    out("Large");
  }else{
    out((c*b));
  }
}
//最小公倍数gと最大公約数lは数字a,bを用いて a*b=g*lと表せるそう
//a/r * bのところでオーバーフローを起こすから10^18/b>a/rを調べる
