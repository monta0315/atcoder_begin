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
  ll n,k;
  cin>>n>>k;
  vector<ll>a(n),b(n),c(n);
  rep(i,n){
    cin>>a.at(i)>>b.at(i);
  }
  rep(i,n){
    c.at(i)=a.at(i)-b.at(i);
  }
  b.insert(b.end(), c.begin(), c.end());
  e(b);
  ll ans = 0;
  rep(i, k)
  {
    ans += b.at(b.size() - 1 - i);
  }
  out(ans);
}
//上界値を探す。
//1分使用することで、まだ回答していない問題の部分点をとることができる、また、既に回答している問題の満点ー部分点の点数を獲得することができる
//考えかた、b.at(i)とa.at(i)-b.at(i)をペアベクターに入れてb.at(i)に対してソートをかける。解いたかどうかは[0,1,2]配列を作成する。
//cの末尾が0ならばそれを1にしansにbの末尾を追加
//cの末尾が1ならば一個前を確認しそれが0ならb.at(一個前)とaの末尾の大小比較しaの方が選択されたならcの末尾をpop
//よくわからない時は上界を見積もる。それで貪欲ほうで時にいく
