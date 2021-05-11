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
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)
int main(){
  int n;
  cin>>n;
  vector<int>t(n);
  int mn = 1000000;
  rep(i,n){
    cin>>t.at(i);
  }
  for(int tmp =0; tmp<(1<<t.size());tmp++){
    int meat_1 = 0;
    int meat_2 = 0;
    bitset<4>b(tmp);
    for(int j=0;j<t.size();j++){
      if(b.test(j)){
        meat_1+= t.at(j);
      }else{
        meat_2 += t.at(j);
      }
    }
    mn = min(mn,max(meat_1,meat_2));
  }
  out(mn);
}
//ビット全探索でとく　01でどっちで焼くか決める
