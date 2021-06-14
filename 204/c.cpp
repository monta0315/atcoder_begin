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

vector<bool> solve(vector<vector<int>> &tree,vector<bool>&reached,int now)
{
  if(reached.at(now)==true){
    return reached;
  }
  reached.at(now) = true;
  for(auto c:tree.at(now)){
    solve(tree, reached, c);
  }
  return reached;
}

int main(){
  int n;
  cin >> n;
  int m;
  cin >> m;
  vector<int> a(m), b(m);
  rep(i,m){
    cin >> a.at(i) >> b.at(i);
  }
  ll ans = 0;
  vector<vector<int>> tree(n);
  rep(i,m){
    tree.at(a.at(i)-1).push_back(b.at(i)-1);
  }
  for (int i = 0; i < n;i++){
    vector<bool> reached(n, false);
    solve(tree, reached, i);
    rep(j,reached.size()){
      if(reached.at(j)){
        ans++;
      }
    }
  }
  out(ans);
  /*   rep(i,n){
    cout << i << " ";
    for (auto c : tree.at(i))
    {
      cout << c ;
    }
    out("");
  } */
}
//深さ優先探索でやる。
