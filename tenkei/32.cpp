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
  //人数
  int n;cin>>n;
  vector<vector<int>>a(n,vector<int>(n));
  rep(i,n){
    rep(j,n){
      cin>>a.at(i).at(j);
    }
  }
  //噂の数
  int m;cin>>m;
  vector<int>x(m);
  vector<int>y(m);
  rep(i,m){
    cin>>x.at(i)>>y.at(i);
  }
  vector<vector<bool>>kenaku(n+1,vector<bool>(n+1));
  rep(i,m){
    kenaku.at(x.at(i)).at(y.at(i))=true;
    kenaku.at(y.at(i)).at(x.at(i))=true;
  }
  //next_permutation関数用
  vector<int>paturn(n);
  rep(i,n){
    paturn.at(i)=i+1;
  }
  ll ans = 100000000;
  do{
    ll sum = 0;
    bool ok = true;
    rep(i,n){
      sum += a.at(i).at(paturn.at(i));
      if(i<n-1&&kenaku.at(paturn.at(i)).at(paturn.at(i+1))){
        ok = false;
      }
    }
    if(ok){
      ans = min(ans,sum);
    }
  }while(next_permutation(paturn.begin(),paturn.end()));
  if(ans = 100000000){out("-1");}
  else{
    out(ans);
  }


}
//paturn配列が選手の走る順番
//考えられる全パターンの順番を試す=>nezxt_permutation関数（順列を作成する）
//=>これを使用する際は順列を作成したい要素を昇順に作成する必要がある。
//仲悪い奴らの順番が一回でも出てきた場合にfalseにする
//仲が悪い奴らの一覧の配列を作成する。
