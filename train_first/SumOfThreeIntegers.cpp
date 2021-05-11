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
//TLE目安は10^8
int main(){
  int k,s;
  cin>>k>>s;
  int cnt = 0;
  for(int i=0;i<=k;i++){
    for(int j=0;j<=k;j++){
      if(s-(i+j)<=k&&s-(i+j)>=0){
        cnt ++;
      }
    }
  }
  out(cnt);
}
