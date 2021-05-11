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

vector<int>h(100010);

ll rec(int i){
  if(i == 0) return 0;
  ll res = INF;
  res = min(res,rec(i-1) + abs(h.at(i) - h.at(i-1)));
  if(i>1)res = min(res,rec(i-2) + abs(h.at(i) = h.at(i-2)));

  return res;
}

int main(){
  int n;cin>>n;
  rep(i,n){
    cin>>h.at(i);
  }
  out(rec(n-1));
}
//dpテーブルを作成し、そこに値を代入していくのは変わらないが、値の最小値の代入を再帰関数で行う。
//再帰関数に必要な要素として、決定したいdpテーブルの場所、現在の場所
