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
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){
int main(){
  int n,m;
  cin>>n>>m;
  vector<int>x(m),y(m);
  rep(i,m){
    cin>>x.at(i)>>y.at(i);
  }
  map<int,int>mp;
  for(int i=0;i<m;i++){
    mp[x.at(i)]++;
  }
  int mx = 0;
  for(auto a :mp){
    cout<<a.first<<" "<<a.second<<endl;
    mx = max(a.second,mx);
  }
  out(mx+1);

}