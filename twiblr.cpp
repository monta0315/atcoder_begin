#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  int a, b;
  cin >> a >> b;
  int c = a * 2 + 100;
  if(c-a>0){
    out(c - b);
  }else{
    out(0);
  }
}
