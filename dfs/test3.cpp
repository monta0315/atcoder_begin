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
int h,w;
void solve(vector<vector<char>>&c,vector<vector<bool>>&reached,int y,int x){
  if(x<0||x>=w||y<0||y>=h||reached.at(y).at(x))return;
  if(c.at(y).at(x)=='#')return;
  reached.at(y).at(x) = true;
  solve(c,reached,y+1,x);
  solve(c,reached,y-1,x);
  solve(c,reached,y,x+1);
  solve(c,reached,y,x-1);
  return;
}

int main(){
  cin>>h>>w;
  vector<vector<char>>c(h,vector<char>(w));
  vector<vector<bool>>reached(h,vector<bool>(w,false));
  int s_x,s_y,g_x,g_y;
  rep(i,h){
    rep(j,w){
      char t;
      cin>>t;
      if(t=='s'){
        s_x = j;
        s_y= i;
      }else if(t=='g'){
        g_x = j;
        g_y = i;
      }
      c.at(i).at(j)=t;
    }
  }
  solve(c,reached,s_y,s_x);
  if(reached.at(g_y).at(g_x)){
    out("Yes");
  }else{
    out("No");
  }
}
//再帰関数で実装する。
//引数はグラフ配列、現在いるx座標、y座標、reached配列。
//再帰処理は現在の座標から一つずつ動く。動けたらreached配列を更新
//ベースケースは座標外に出た時と'#'座標にたどり着いた時
//solve関数でreached配列を更新しmain関数で判定。
