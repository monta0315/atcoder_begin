#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  int n;
  string s;
  cin >> n >> s;
  if(s.length()%2!=0){
    out("No");
    exit(0);
  }
  int b = s.length() / 2;
  for (int i = 0; i < b; i++)
  {
    if(s.at(i)!=s.at(b+i)){
      out("No");
      exit(0);
    }
  }
  out("Yes");
}
