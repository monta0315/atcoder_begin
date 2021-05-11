#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

int main(){
  string s;
  cin >> s;
  bool flag1 = false;
  bool flag2 = false;
  int cnt = 0;
  rep(i, 3)
  {
    if(s.at(i)=='R'&&flag2==true){
      cnt = 3;
    }
    else if(s.at(i)=='R'&&flag1==true){
      cnt=2;
      flag2 = true;
    }
    else if(s.at(i)=='R'&&flag1==false){
      cnt = 1;
      flag1 = true;
    }else{
      flag1 = false;
      flag2 = false;
    }
  }
  out(cnt);
}
