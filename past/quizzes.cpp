#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n, x;
  string s;
  cin >> n >> x >> s;
  rep(i,n){
    if(s.at(i)=='o'){
      x += 1;
    }else{
      if(x>0){
        x -= 1;
      }
    }
  }
  out(x);
}
