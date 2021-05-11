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
  int h,w;
  cin>>h>>w;
  vector<vector<int>>a(h,vector<int>(w));
  vector<int>w_store(h);
  vector<int>h_store(w);
  rep(i,h){
    rep(j,w){
      int c;
      cin>>c;
      a.at(i).at(j)=c;
    }
  }
  rep(i,h){
    int w_sum = 0;
    rep(j,w){
      w_sum +=a.at(i).at(j);
    }
    w_store.at(i)=w_sum;
  }
  rep(j,w){
    int h_sum =0;
    rep(i,h){
      h_sum += a.at(i).at(j);
    }
    h_store.at(j)=h_sum;
  }
  rep(i,h){
    rep(j,w){
      cout<<w_store.at(i)+h_store.at(j)-a.at(i).at(j)<<" ";
    }
    out("");
  }
}
//普通に計算したらTLE出る気がする。
