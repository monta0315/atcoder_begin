#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  int min = 1000;
  int cnt = 0;
  rep(i, h)
  {
    rep(j,w){
      cin >> a.at(i).at(j);
      if(min>a.at(i).at(j)){
        min = a.at(i).at(j);
      }
    }
  }
  rep(i,h){
    rep(j,w){
      cnt += abs(a.at(i).at(j) - min);
    }
  }
  out(cnt);
}
