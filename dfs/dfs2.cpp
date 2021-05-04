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

void solve(vector<vector<char>>&a,vector<vector<bool>>&reached,int y,int x){
  if(x<0||x>9||y<0||y>9||reached.at(y).at(x)==true)return;
  if(a.at(y).at(x)=='x')return;
  reached.at(y).at(x) = true;
  solve(a,reached,y,x+1);
  solve(a,reached,y,x-1);
  solve(a,reached,y+1,x);
  solve(a,reached,y-1,x);
}

bool solve2(vector<vector<char>>&a,vector<vector<bool>>&reached){
  rep(i,10){
    rep(j,10){
      if(a.at(i).at(j)=='o'&&reached.at(i).at(j)==false){
        return false;
      }
    }
  }
  return true;
}

int main(){
  vector<vector<char>>a(10,vector<char>(10));
  rep(i,10){
    rep(j,10){
      cin>>a.at(i).at(j);
    }
  }
  vector<vector<bool>>reached(10,vector<bool>(10,false));
  vector<vector<bool>>memo(10,vector<bool>(10,false));
  rep(i,10){
    rep(j,10){
      if(a.at(i).at(j)=='x'){
        a.at(i).at(j)='o';
        solve(a,reached,i,j);
        if(solve2(a,reached)){
          out("YES");
          exit(0);
        }else{
          a.at(i).at(j)='x';
          reached = memo;
        }
      }
    }
  }
  out("NO");
}
//再帰関数でとく
//main関数側で海の部分全てに全探索でスタートしsolve関数を走らせる。
//問題はreach配列をどのように初期化するか、初期化する必要はあるのか？
