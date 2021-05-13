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
  ll k;cin>>k;
  vector<int>a(n);
  vector<int>b(n);
  rep(i,n){
    cin>>a.at(i);
  }
  rep(i,n){
    cin>>b.at(i);
  }
  ll num = 0;
  rep(i,n){
    num += abs(b.at(i)-a.at(i));
  }
  if(num>k){
    out("No");
  }else if(k-num==0){
    out("Yes");
  }else{
    if((k-num)%2==0){
      out("Yes");
    }else{
      out("No");
    }
  }
}
//まずk回以内に一致できるか？
//一致した場合、k回ー一致するまでにかかった回数が偶数か？
