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
  ll a,b,c,n;
  cin>>n>>a>>b>>c;
  //1番目、2番目、3番目に大きい数に振り分ける
  ll f,s,t;
  f = max(a,max(b,c));
  t = min(a,min(b,c));
  if(a==f){
    s = max(b,c);
  }else if(b==f){
    s = max(a,c);
  }else{
    s = max(a,b);
  }
  ll ans = INF;
  for(ll i=9999;i>=0;i--){
    for(ll j=9999-i;j>=0;j--){
      ll money = n;
      money = money-(i*f+j*s);
      if(money==0){
        ans = min(ans,i+j);
      }else if(money>0&&money%t==0){
        ans = min(ans,i+j+money/t);
      }
    }
  }
  out(ans);
}
//貪慾法で考える
//a,b,cで値が大きい順に並び替える
//大きいやつを現状の残金で徐算し、商の分だけルートを回す商＝＞０,残金を大きいやつ＊商で引く
//2番目に大きいやつにも同じことをする最後に残った残金が3番目の残金で割り切れたら商とjとiを足して出力
