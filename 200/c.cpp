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
  vector<ll>mod_a(n);
  rep(i,n){
    ll c;
    cin>>c;
    c = fmodl(c,200);
    mod_a.at(i) = c;
  }
  map<int,ll>store;
  rep(i,n){
    store[mod_a.at(i)]++;
  }
  ll num = 0;
  rep(i,200){
    if(store[i]!=0&&store[i]!=1){
      //cout<<i<<" "<<store[i]<<endl;
      num +=(store[i]*(store[i]-1)/2);
      //intだとオーバーフローの可能性
    }
  }
  out(num);
}
//合同式を使用して考える
//Ai-Aj≡0 =>Ai≡Aj =>mod200をとったものが等しければおk
//modだからリターンされる数字は0~199
//入力値にmod200をとり、それの個数をカウントする
