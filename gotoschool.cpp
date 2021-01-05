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
  cin>>n;
  vector<int> a(n);
  rep(i,n){
    cin >> a.at(i);
  }
  vector<pair<int, int>> num(n);
  for (int i = 0; i < n; i++)
  {
    num.at(i) = make_pair(a.at(i), i + 1);
  }
  all(num);
  rep(i,n){
    int a, b;
    tie(a, b) = num.at(i);
    cout<<b<<" ";
  }
  cout << endl;
}
