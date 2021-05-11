#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  long n;
  cin >> n;
  vector<long> h;
  for (int i = 1; i <= sqrt(n);i++){
    if(n%i==0){
      h.push_back(i);
    }
  }
  long ans = 1000000000000;
  for (int i = 0; i < h.size();i++){
    long num = h.at(i) + n / h.at(i);
    if(num<ans){
      ans = num;
    }
  }
  out(ans-2);
}
//公約数見つけて、それのペアの足し算の最小のものから２引いたものが答え？
//公約数を格納する配列を作成する
//nのルートまでのループの中でnを割り切った数を格納
