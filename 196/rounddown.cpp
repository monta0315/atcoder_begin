#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl
#define twod(h, w) vector<vector<int>> v(h, vector<int>(w))
#define ctoi(c) c - '0'
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
int main(){
  vector<int>m;
  string s;
  ll ans=0;
  cin>>s;
  for(int i=0;i<s.length();i++){
    if(s.at(i)=='.'){
      break;
    }else{
      m.push_back(ctoi(s.at(i)));
    }
  }
  for(int i=0;i<m.size();i++){
    cout<<m.at(i);
  }
  cout<<endl;
}
