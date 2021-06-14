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
  vector<int>c(n);
  vector<int>p(n);
  rep(i,n){
    cin>>c.at(i)>>p.at(i);
  }
  int q;cin>>q;
  vector<int>l(q);
  vector<int>r(q);
  rep(i,q){
    cin>>l.at(i)>>r.at(i);
  }
  //各クラスの学生番号インデックス番までの人の期末試験の点数の和をストアする配列
  vector<ll>first;
  vector<ll>second;
  first.push_back(0);
  second.push_back(0);
  ll f_sum = 0;
  ll s_sum = 0;
  rep(i,n){
    if(c.at(i)==1){
      f_sum += p.at(i);
    }else{
      s_sum += p.at(i);
    }
    first.push_back(f_sum);
    second.push_back(s_sum);
  }
  rep(i,q){
    cout<<first.at(r.at(i))-first.at(l.at(i)-1)<<" "<<second.at(r.at(i))-second.at(l.at(i)-1)<<endl;
  }
}
//各クラスのその番号までのテストの点数のsumの配列を用意する。
