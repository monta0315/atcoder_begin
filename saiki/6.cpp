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
  int n;cin>>n;
  vector<int>h(n);
  rep(i,n){
    cin>>h.at(i);
  }
  vector<ll>dp(n,INF);
  dp.at(0) = 0;//最初の足場へ行くコストは０
  for(int i=1;i<n;i++){
    dp.at(i) = min(dp.at(i),dp.at(i-1)+abs(h.at(i)-h.at(i-1)));
    if(i > 1) dp.at(i) = min(dp.at(i),dp.at(i-2)+abs(h.at(i)-h.at(i-2)));
  }
  out(dp.at(n-1));
}
//再帰関数で実装、ベースケースは足場iがnになったら。やり方として二つあって、コストを記録するメモ配列を作成する。minを作成して全探索させて、i=nの時のコストとminを比較する。必要なものとして、min,ゴール、今いる場所、コスト配列、現コスト。
//=>dpテーブルを用いた方が簡単。必要なものdpテーブル（n個）,h,
