#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  long n;
  cin >> n;
  vector<long> a;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if(n%i==0){
      out(i);
      if(i!=n/i){
        a.push_back(n / i);
      }
    }
  }
  rep(i,a.size()){
    out(a.at(a.size() - i - 1));
  }
}
