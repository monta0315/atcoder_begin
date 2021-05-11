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
int w,h;
void solve(vector<vector<int>>&c,vector<vector<bool>>&reached,int y,int x){
  if(y<0||y>=h||x<0||x>=w||reached.at(y).at(x))return;
  if(c.at(y).at(x)==0)return;

  reached.at(y).at(x)=true;
  solve(c,reached,y,x+1);
  solve(c,reached,y,x-1);
  solve(c,reached,y+1,x);
  solve(c,reached,y-1,x);
  solve(c,reached,y+1,x+1);
  solve(c,reached,y-1,x-1);
  solve(c,reached,y-1,x+1);
  solve(c,reached,y+1,x-1);
  return;
}

int main(){
  cin>>w>>h;
  vector<vector<int>>c(h,vector<int>(w));
  vector<vector<bool>>reached(h,vector<bool>(w,false));
  rep(i,h){
    rep(j,w){
      cin>>c.at(i).at(j);
    }
  }
  int num = 0;
  rep(i,h){
    rep(j,w){
      if(c.at(i).at(j)==1&&reached.at(i).at(j)==false){
        solve(c,reached,i,j);
        num++;
      }
    }
  }
  out(num);
}
