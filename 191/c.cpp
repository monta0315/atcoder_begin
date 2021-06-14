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
  vector<vector<char>>s(h,vector<char>(w));
  rep(i,h){
    rep(j,w){
      cin>>s.at(i).at(j);
    }
  }
  ll s_num = 0;
  rep(i,h){
    rep(j,w){
      if(s.at(i).at(j)=='#'){
        s_num+=1;
      }
    }
  }
  if(s_num==1||s_num==2){
    out(4);
    exit(0);
  }
  vector<int>move_x = {-1,0,1,1,1,0,-1,-1};
  vector<int>move_y = {1,1,1,0,-1,-1,-1,0};
  map<int,int>store;
  rep(i,h){
    rep(j,w){
      if(s.at(i).at(j)=='#'){
        int num = 0;
        for(int k=0;k<8;k++){
          if(i+move_y.at(k)>=0||i+move_y.at(k)<=h||j+move_x.at(k)>=0||j+move_x.at(k)<=w){
            if(s.at(i+move_y.at(k)).at(j+move_x.at(k))=='#'){
              num++;
            }
          }
        }
        store[num]++;
      }
    }
  }
  for(int i=1;i<8;i++){
    if(store[i]!=0){
      cout<<store[i]<<endl;
      exit(0);
    }
  }
}
//一番黒の共有点が少ない点の個数を数える
