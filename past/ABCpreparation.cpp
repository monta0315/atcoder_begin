#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  vector<int> a(4);
  int min = 100000;
  rep(i, 4)
  {
    cin >> a.at(i);
    if(min>a.at(i)){
      min = a.at(i);
    }
  }
  out(min);
}
