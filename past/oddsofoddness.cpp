#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  double n;
  cin>>n;
  double cnt = 0;
  for (int i = 1; i <= n; i++)
  {
    if(i%2==1){
      cnt++;
    }
  }
  printf("%.8f", cnt / n);
}
