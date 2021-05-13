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
  string a;
  cin>>a;
  int b,c;
  cin>>b>>c;
  unsigned long long bc=1;
  for(int i=0;i<b;i++){
    bc *= c;
  }
  string b_c = to_string(bc);
  //サイズで比較
  if(a.length()<b_c.length()){
    out("Yes");
    exit(0);
  }else if(a.length()>b_c.length()){
    out("No");
    exit(0);
  }else{
    rep(i,a.length()){
      if(ctoi(a.at(i))<ctoi(b_c.at(i))){
        out("Yes");
        exit(0);
      }else if(ctoi(a.at(i))>ctoi(b_c.at(i))){
        out("No");
        exit(0);
      }
    }
  }
  out("No");
}
//powは誤差を出す
//logも誤差を出す
//整数で処理
