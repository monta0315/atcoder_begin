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
  int q;cin>>q;
  vector<ll>a(n);
  rep(i,n){
    cin>>a.at(i);
  }
  vector<ll>t(q),x(q),y(q);
  rep(i,q){
    cin>>t.at(i)>>x.at(i)>>y.at(i);
  }
  ll t2count = 0;
  rep(i,q){
    if(t.at(i)==1){
      ll x_num = x.at(i);
      ll y_num = y.at(i);
      x_num += t2count;
      y_num += t2count;
      if(x_num>n){
        x_num -= n;
      }
      if(y_num>n){
        y_num -= n;
      }
      swap(a.at(x_num-1),a.at(y_num-1));
    }else if(t.at(i)==2){
      t2count++;
    }else if(t.at(i)==3){
      ll z_num = x.at(i);
      z_num += t2count;
      if(z_num>n){
        z_num -= n;
      }
      out(a.at(z_num-1));
    }
  }
}
//メインの動的配列を用意し、t=1,3のときは普通に動作する。
//t=2のときは一番後ろをなんかに代入して、popし、前にinsertする
//これだとTLEが起きるので、t2は行わない！！
//何回t2が呼ばれたかを記憶しておき、t1,t3での出力に利用する。
