#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl
#define twod(h, w) vector<vector<int>> v(h, vector<int>(w))
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  rep(i,h){
    rep(j,w){
      cin >> s.at(i).at(j);
    }
  }

}
//黒い点の際に隣接する白い点の数をカウントし，一番小さい値を持つ黒い点の個数をn角形のnと考える．
