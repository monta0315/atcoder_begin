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
  vector<ll>a(n);
  rep(i,n){
    cin>>a.at(i);
  }
  int q;cin>>q;
  vector<ll>b(q);
  rep(i,q){
    cin>>b.at(i);
  }
  e(a);
  rep(i,q){
    int index = lower_bound(a.begin(),a.end(),b.at(i)) - a.begin();
    if(index>=n){out(abs(b.at(i)-a.at(index-1)));}
    else if(index==0){out(abs(b.at(i)-a.at(0)));}
    else{
      out(min(abs(b.at(i)-a.at(index)),abs(b.at(i)-a.at(index-1))));
    }
  }
}
//二分探索で生徒のレーティングに一番近くちょい超えてる値のインデックス撮ってくる
//それがn番目だったらそれとのabsを出出力
//そうではなかったら一個下のレーティングとのabsの大小比較をしてminの方を出力
//0番目だったらそのまま出力
