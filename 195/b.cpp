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
  int a,b;
  int w;
  cin>>a>>b>>w;
  bool ok = true;
  int MIN = 0;
  int MAX = 0;
  w = w*1000;
  if(w%b==0){
    MIN = w/b;
  }else{
    MIN = w/b+1;
  }
  MAX = w/a;
  if(MAX*b<w){
    ok=false;
  }
  if(ok){
    cout<<MIN<<" "<<MAX<<endl;
  }else{
    out("UNSATISFIABLE");
  }
}
//個数の限界から探る
