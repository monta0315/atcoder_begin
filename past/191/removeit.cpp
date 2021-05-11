#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl;
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

int main(){
  ll n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i,n){
    cin >> a.at(i);
  }
  ll num = 0;
  rep(i, n)
  {
    if(a.at(i)==x){
      num++;
    }
  }
  if(num==0){
    rep(i,a.size()){
      cout << a.at(i) << " ";
    }
  }else{
    vector<int> b;
    rep(i,n){
      if(a.at(i)!=x){
        b.push_back(a.at(i));
      }
    }
    rep(i,b.size()){
      cout << b.at(i) << " ";
    }
  }
}
