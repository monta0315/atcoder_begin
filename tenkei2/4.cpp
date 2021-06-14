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
  int h;cin>>h;
  int w;cin>>w;
  vector<vector<int>>a(h,vector<int>(w));
  rep(i,h){
    rep(j,w){
      cin>>a.at(i).at(j);
    }
  }
  vector<int>w_sum(h);
  vector<int>h_sum(w);
  rep(i,h){
    rep(j,w){
      w_sum.at(i) += a.at(i).at(j);
    }
  }
  rep(j,w){
    rep(i,h){
      h_sum.at(j) += a.at(i).at(j);
    }
  }
  rep(i,h){
    rep(j,w){
      cout<<w_sum.at(i)+h_sum.at(j)-a.at(i).at(j)<<" ";
    }
    out("");
  }
}
//対応する行と列の和をstoreしておく二次元配列を作成する
