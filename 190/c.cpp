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
  int m;cin>>m;
  vector<int>a(m),b(m);
  rep(i,m){
    cin>>a.at(i)>>b.at(i);
  }
  int k;cin>>k;
  vector<int>c(k),d(k);
  rep(i,k){
    cin>>c.at(i)>>d.at(i);
  }
  vector<vector<int>>store(pow(2,k),vector<int>(n));
  for(int tmp =0;tmp<(1<<k);tmp++){
    bitset<16>b(tmp);
    for(int i=0;i<k;i++){
      if(b.test(i)){
        store.at(tmp).at(d.at(i)-1)++;
      }else{
        store.at(tmp).at(c.at(i)-1)++;
      }
    }
  }
  ll ans = 0;
  rep(i,pow(2,k)){
    ll num=0;
    rep(j,m){
      if(store.at(i).at(a.at(j)-1)!=0&&store.at(i).at(b.at(j)-1)!=0){
        num++;
      }
    }
    ans = max(ans,num);
  }
  out(ans);
}
//二進数全探索で考える
//0ならc 1ならd
