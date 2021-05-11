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
  cin >> n;
  for (int i = 1; i <= 9;i++){
    for (int j = 1; j <= 9;j++){
      if(i*j==n){
        out("Yes");
        exit(0);
      }
    }
  }
  out("No");
}
