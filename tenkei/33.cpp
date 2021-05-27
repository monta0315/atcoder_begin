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
int main(){
  int h;cin>>h;
  int w;cin>>w;
  int h_num,w_num = 0;
  if(h==1||w==1){
    //４つ含む領域が存在しないから？
    out(h*w);
    exit(0);
  }
  if(h%2==0){
    h_num = h/2;
  }else{
    h_num = h/2+1;
  }
  if(w%2==0){
    w_num = w/2;
  }
  else{
    w_num = w/2+1;
  }
  out(h_num*w_num);
}
//左上から埋めていく
//全探索すると2^10000乗になり死ぬ
//隅奇で場合わけ
//偶数の時->h/2
