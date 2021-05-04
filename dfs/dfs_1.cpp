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
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}

int h,w;
const int n = 501;
vector<vector<char>> field;
vector<vector<bool>> reached(n,vector<bool>(n)); //到達可能か

void search(int x,int y){
  //迷路の外側と壁の場所は何もしない
  if(x<0||w<=x||y<0||h<=y||c.at(x).at(y)=='#')return;
  if(reached.at(x).at(y)) return;
  reached.at(x).at(y) == 1;
  search(x+1,y);
  search(x-1,y);
  search(x,y+1);
  search(x,y-1);
}

int main(){
  int s_x,s_y,g_x,g_y;
  cin>>h>>w;
  rep(i,h){
    rep(j,w){
      cin>>c.at(i).at(j);
      if(c.at(i).at(j)=='s'){
        s_x=j;
        s_y=i;
      }else if(c.at(i).at(j)=='g'){
        g_x = j;
        g_y = i;
      }
    }
  }
  search(s_x-1,s_y-1);
  rep(i,h){
    rep(j,w){
      cout<<reached.at(i).at(j);
    }
    out(" ");
  }
  if(reached.at(g_y-1).at(g_x-1)){
    out("Yes");
  }else{
    out("No");
  }
}
