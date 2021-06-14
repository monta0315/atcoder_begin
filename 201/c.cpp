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
  string s;
  cin>>s;
  ll ans = 0;
  for(int i=0;i<10000;i++){
    bool ok = true;
    vector<int>store(4);
    vector<bool>check(10,true);
    rep(j,10){if(s.at(j)=='o'){check.at(j)=false;}}
    if(i<10){
      store.at(0) = 0;
      store.at(1) = 0;
      store.at(2) = 0;
      store.at(3) = i;
    }else if(i<100){
      store.at(0) = 0;
      store.at(1) = 0;
      store.at(2) = i/10;
      store.at(3) = i%10;
    }else if(i<1000){
      store.at(0) = 0;
      store.at(1) = i/100;
      store.at(2) = (i%100)/10;
      store.at(3) = (i%100)%10;
    }else{
      store.at(0)=i/1000;
      store.at(1)=(i/100)%10;
      store.at(2)=(i%100)/10;
      store.at(3)=i%10;
    }
    rep(j,4){
      if(s.at(store.at(j))=='x'){
        ok = false;
      }
      check.at(store.at(j)) = true;
    }
    //cout<<i<<" ";
    rep(j,10){
      //cout<<check.at(j)<<" ";
      if(check.at(j)==false){
        ok = false;
      }
    }
    //out("");
    if(ok){ans++;}
  }
  out(ans);
}
//1万通り回す
//0~9999までループを回し、その時の値を暗証番号として使用する
//４桁ない数に対しては上手く4桁にする
//s.at(store.at(i))=='x'なら確実にアウト
//チェック用配列を用意し、4桁でoの数を全てtrueにしていたら＋１
