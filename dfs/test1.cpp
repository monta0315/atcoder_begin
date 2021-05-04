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
vector<vector<char>>c(505,vector<char>(505));
vector<vector<bool>>memo(505,vector<bool>(505,false));

void solve(int x,int y){
  if(x<0||x>=w||y<0||y>=h) return;
  if(c.at(y).at(x)=='#')return;
  if(memo.at(y).at(x)==true) return;
  memo.at(y).at(x) = true;
  solve(x+1,y);
  solve(x-1,y);
  solve(x,y+1);
  solve(x,y-1);
}

int main(){
  cin>>h;
  cin>>w;
  int s_x,s_y,g_x,g_y;
  rep(i,h){
    rep(j,w){
      cin>>c.at(i).at(j);
      if(c.at(i).at(j)=='s'){
        s_x = j;
        s_y = i;
      }else if(c.at(i).at(j)=='g'){
        g_x = j;
        g_y = i;
      }
    }
  }
  solve(s_x,s_y);
  if(memo.at(g_y).at(g_x)==true){
    out("Yes");
  }else{
    out("No");
  }
}
//引数＝＞自分が今いる場所の座標
//ベースケース＝＞自分が現在いる座標が#の場合、memo関数の中身がfalseの場合、区画外＝＞x<0||x>w,などになった場合
//現在よりx座標が１だけ多い場所にいく、一だけ小さい場所にいく、y座標が、、
