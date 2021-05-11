#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  vector<int> l(n);
  rep(i,n){
    cin >> l.at(i);
  }
  all(l);
  int ans = 0;
  for (int b = 0; b < n; b++)
  {
    for (int a = 0; a < b;a++){
      //aとbを固定する
      //bを全部まで回せるようにして、aをb-1まで動けるようにする
      int ab = l.at(a) + l.at(b);
      //二分探索する上での分ける場所
      int r = lower_bound(l.begin(), l.end(), ab) - l.begin();
      //二分探索の場所を返してくれる。beginを引くことでイテレーターではなく添字を返してくれる
      int L = b + 1;
      //Cとして考えられる区間
      ans += max(0,r - L);
      //マイナスが生まれないように、、、、、
    }
  }
    out(ans);
}
//やり方として２通りあると思う
//ビット全探索かループを一個消す
//ビット全探索で考える->nの数が大きすぎて使えない=>計算量2^n
