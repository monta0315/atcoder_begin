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
const long long INF = 1LL << 30;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}
int main(){
  int n;cin>>n;
  vector<int>h(n);
  rep(i,n){
    cin>>h.at(i);
  }
  vector<int>store(n,INF);
  store.at(0)=0;
  for(int i=1;i<n;i++){
    store.at(i) = min(store.at(i),store.at(i-1)+abs(h.at(i)-h.at(i-1)));
    if(i>1){
      store.at(i) = min(store.at(i),store.at(i-2)+abs(h.at(i)-h.at(i-2)));
    }
  }
  out(store.at(n-1));
}
//やり方＝＞最小のコストを保存する配列を用意する。各足場への辿り着くコストの最小を求める
