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

bool checked = true;
bool solve(vector<vector<int>>&tree,vector<bool>&reached,int n){
  reached.at(n) = true;
  for(auto next:tree.at(n)){
    if(reached.at(next)){
      checked = false;
      continue;
    }
    solve(tree,reached,next);
  }
  return checked;
}

int main(){
  int n;cin>>n;
  int m;cin>>m;
  vector<int>u(m);
  vector<int>v(m);
  rep(i,m){
    cin>>u.at(i)>>v.at(i);
  }
  vector<bool>reached(n,false);
  vector<vector<int>>tree(n);
  rep(i,m){
    int parent = u.at(i)-1;
    tree.at(parent).push_back(v.at(i)-1);
  }
  /* rep(i,n){
    cout<<i;
    for(auto c:tree.at(i)){
      cout<<" "<<c;
    }
    out("");
  } */
  int num =0;
  rep(i,n){
    if(reached.at(i) == false){
      checked = true;
      if(solve(tree,reached,i)){
        num += 1;
      }
    }
  }
  out(num);
}
//再帰関数で解く。
//各頂点についてfor文で全探索し、
