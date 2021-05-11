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



int binary_searchh(ll value,vector<ll>&a){
  int left = -1;
  int right = a.size();
  //左端と右端を設定
  while(right-left>1){
    //このmidの式は図を書けばこうなるのがわかる
    int mid = left+(right-left)/2;
    if(value<=a.at(mid)){
      //左端または右端の値更新
      right = mid;
    }
    else{
      left = mid;
    }
  }
  return right;
}

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
  //小さい順に並び替え
  e(a);
  for(int i=0;i<q;i++){
    int num = binary_searchh(b.at(i),a);
    if(num == 0){
      out(abs(b.at(i)-a.at(num)));
    }
    else{out(min(abs(b.at(i)-a.at(num)),abs(b.at(i)-a.at(num-1))));}
  }
}
//方針
//b.at(i)に一番近いaの値に対してabs(a.at()-b.at(i))を出力する
//このままだとTLEするので二分探索を用いる
//とりあえず頑張って自分で実装してみて無理そうだったらライブラリ使用する。
//二分探索の概要としてソートされている配列に対して、半分から絞っていく
