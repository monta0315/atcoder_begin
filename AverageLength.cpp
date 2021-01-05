#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

void solve(vector<int> &l, vector<int> &x, vector<int> &y ,int n,ll ans){
  rep(i,n-1){
    int a = (x.at(l.at(i)) - x.at(l.at(i + 1))) * (x.at(l.at(i))- x.at(l.at(i + 1)));
    int b = (y.at(l.at(i)) - y.at(l.at(i + 1))) * (y.at(l.at(i)) - y.at(l.at(i + 1)));
    ans += sqrt(a + b);
  }
}

    int main()
{
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  ll ans = 0;
  rep(i, n)
  {
    cin >> x.at(i) >> y.at(i);
  }
  vector<int> l = {0,1, 2, 3, 4, 5, 6, 7};
  //巡回する順番決める配列
  rep(i,n){
    solve(l, x, y, n, ans);
    rep(j, n - 1)
    {
      if(l.at(j)<l.at(j+1)){
        swap(l.at(j), l.at(j + 1));
        solve(l, x, y, n, ans);
      }
    }
  }
  out(ans / n);
}
//問題的に全探索しなければいけない訳で
//どうにか全通り、当たるアルゴリズムを考える
//計算の順番を指定する配列を作成する？
//とりあえず,solve関数で指定された順番通りに距離を総和してansに格納する
//ソート作ってその途中のやつ使う？・・TLEになる気がするが
