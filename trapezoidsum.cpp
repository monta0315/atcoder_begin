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
  vector<int> a(n), b(n);
  rep(i,n){
    cin >> a.at(i) >> b.at(i);
  }
  long sum = 0;
  rep(i,n){
    sum += 0.5 * (a.at(i) + b.at(i)) * (b.at(i) - a.at(i) + 1);
  }
  out(sum);
}
