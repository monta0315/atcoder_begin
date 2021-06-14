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
#define getdigit(n) log10(n) + 1
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
const long long INF = 1LL << 60;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}
int main(){
  string s;cin>>s;
  int q;cin>>q;
  vector<int>a(q);
  vector<int>b(q);
  rep(i,q){
    cin>>a.at(i)>>b.at(i);
  }
  rep(i,q){
    if(a.at(i)==b.at(i)){
      out(s);
    }else{
      int num = (b.at(i)-a.at(i)+1)/2;
      for(int j=0;j<num;j++){
        swap(s.at(a.at(i)+j),s.at(b.at(i)-j));
      }
      out(s);
    }
  }
}
//指定された範囲の文字のリバースを繰り返す
//動的配列のリバース関数を作成する
//swapしていくやり方で考える
