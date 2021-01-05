#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  int cnt = 0;
  rep(i, n)
  {
    cin >> h.at(i);
  }
  rep(i,n){
    if(h.at(i)>=k){
      cnt++;
    }
  }
  out(cnt);
}
