#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  long n, k;
  cin >> n >> k;
  vector<vector<long>> t(n, vector<long>(n));
  long ans = 0;
  int num = 0;
  rep(i, n)
  {
    rep(j,n){
      cin >> t.at(i).at(j);
    }
  }
  vector<int> r(n-1);
  rep(i,n-1){
    r.at(i) = i + 2;
  }
  //ルート順の配列作成
  rep(i,n-1){
    rep(j,n-2){
      swap(r.at(j), r.at(j + 1));
      ans = 0;
      //ルートの入れ替え
      rep(k,r.size()-1){
        ans += t.at(r.at(k)).at(r.at(k + 1));
      }
      ans += t.at(0).at(r.at(0)) + t.at(r.at(n-1)).at(0);
      if(ans==k){
        num++;
      }
    }
  }
  out(num);
}
//全探索、Nを全通り回る順番を作成し、時間を足す
