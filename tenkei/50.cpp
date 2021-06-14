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
  int n, l;
  cin >> n >> l;
  vector<ll> dp(n+1);
  //dpの意味として、i番目に到達する手段数
  //１段目に到達する方法は一通りしかないため、dp.at(0)は１
  //また、L段目より低い段に行くためには一段ずつ登るしかないため一通りしかない
  //L段目以降に行く場合はその１段前から一段ずつ登る可能性とL段前から登ってくる二通りある
  //これを再起的に解くのが動的計画法
  dp.at(0) = 1;
  for (int i = 1; i <=n;i++){
    if(i<l){
      dp.at(i) = dp.at(i - 1);
    }else{
      dp.at(i) = (dp.at(i - 1) + dp.at(i-l))%MOD;
    }
  }
  out(dp.at(n));
}
