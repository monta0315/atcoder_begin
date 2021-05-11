#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define fore(i,a) for(auto &a:a)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl
#define twod(h, w) vector<vector<int>> v(h, vector<int>(w))
#define ctoi(c) c - '0'
#define getdigit(n) log10(n) + 1 //桁数
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
int main(){
  int n,y;
  cin>>n>>y;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n-i;j++){
      for(int k=0;k<=n-i-j;k++){
        if(10000*i+5000*j+1000*k==y&&i+j+k==n){
          cout<<i<<" "<<j<<" "<<k<<endl;
          exit(0);
        }
      }
    }
  }
  cout<<"-1 -1 -1"<<endl;
}
