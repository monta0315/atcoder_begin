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
  int n;cin>>n;
  int num = 0;
  vector<string>store;
  for(int tmp =0;tmp<(1<<n);tmp++){
    bitset<20>b(tmp);
    //0の個数
    int f_num = 0;
    //1の個数
    int t_num = 0;
    bool check = true;
    for(int i=0;i<n;i++){
      if(b.test(i)){
        t_num++;
      }else{
        f_num++;
      }
      if(f_num<t_num){
        check = false;
        break;
      }
    }
    if(f_num==t_num&&check){
      string s="";
      rep(i,n){
        if(b.test(i)){
          s+=")";
        }else{
          s+="(";
        }
      }
      store.push_back(s);
    }
  }
  if(store.size()==0){
    exit(0);
  }
  e(store);

  rep(i,store.size()){
      out(store.at(i));
  }
}
//bit全探索で求める!0=>(,1=>)
//左から探索していき、0,1の数をカウントアップしていく、その際、0の数を1が超えたらアウト、最終的に0と1の数が等しくなければアウトとする
