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
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}

int fibo(int n,vector<ll> &memo){
  if (n == 0) return 0;
  else if (n == 1) return 1;
  if (memo[n] != -1) return memo[n];

  return memo[n] = fibo(n-1,memo) + fibo(n-2,memo);
}

int main(){
  vector<ll> memo(50,-1);
  for (int n = 0; n < 50; ++n) {
        cout << n << " 項目の値: " << fibo(n, memo) << endl;
    }
}
//メモ配列を用いる＝＞具体的には、同じ計算を何度もしないようにその計算をしたかと答えは何かを記録しておく。
