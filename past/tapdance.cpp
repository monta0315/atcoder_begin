#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  string s;
  cin >> s;
  if(s.at(0)=='L'){
    out("No");
    exit(0);
  }
  for (int i = 1; i < s.length();i++){
    if(i%2==1){
      if(s.at(i)=='R'){
        out("No");
        exit(0);
      }
    }else{
      if (s.at(i) == 'L')
      {
        out("No");
        exit(0);
      }
    }
  }
  out("Yes");
}
