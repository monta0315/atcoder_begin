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
  int n;
  cin >> n;
  vector<long> l(n);
  rep(i,n){
    cin >> l.at(i);
  }
  int cnt = 0;
  for (int i = 0; i < n - 2;i++){
    for (int j = i + 1; j < n - 1;j++){
      for (int k = j + 1; k < n;k++){
        int a = l.at(i);
        int b = l.at(j);
        int c = l.at(k);
        if(a!=b&&b!=c&&a!=c){
          if(a+b>c&&b+c>a&&c+a>b){
            cnt++;
          }
        }
      }
    }
  }
  out(cnt);
}
