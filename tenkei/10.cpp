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
  vector<int>c(n);
  vector<int>p(n);
  rep(i,n){
    cin>>c.at(i)>>p.at(i);
  }
  int q;cin>>q;
  vector<int>l(q);
  vector<int>r(q);
  //１組のsumを保存しておく
  vector<ll>store_1(n+5);
  store_1.at(0)=0;
  //２組のsumを保存しておく
  vector<ll>store_2(n+5);
  store_2.at(0)=0;
  /* if(c.at(0)==1){
    store_1.at(0)=p.at(0);
    store_2.at(0)=0;
  }else{
    store_1.at(0)=0;
    store_2.at(0)=p.at(0);
  } */
  rep(i,q){
    cin>>l.at(i)>>r.at(i);
  }
  //そのインデックスまでの各組の期末の和をstoreする
  for(int i=0;i<n;i++){
    if(c.at(i)==1){
      store_1.at(i+1)=p.at(i)+store_1.at(i);
      store_2.at(i+1)=store_2.at(i);
    }else{
      store_1.at(i+1)=store_1.at(i);
      store_2.at(i+1)=p.at(i)+store_2.at(i);
    }
  }
  rep(i,n+1){
    //cout<<store_1.at(i)<<" "<<store_2.at(i)<<endl;
  }
  rep(i,q){
    cout<<store_1.at(r.at(i))-store_1.at(l.at(i)-1)<<" "<<store_2.at(r.at(i))-store_2.at(l.at(i)-1)<<endl;
  }
}
//普通にやったらTLEになる。
//どこの処理を変更するか
//メモ配列を用いる？=>予めsumを計算しておく
//
