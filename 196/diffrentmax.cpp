#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl
#define twod(h, w) vector<vector<int>> v(h, vector<int>(w))
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
int main(){
  int a,b,c,d;
  int max=-100000;
  cin>>a>>b>>c>>d;
  for(int x=a;x<=b;x++){
    for(int y=c;y<=d;y++){
      if(max<x-y){
        max=x-y;
      }
    }
  }
  out(max);
}
