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
  vector<char> s(n);
  int ans = 1;
  rep(i, n)
  {
    cin >> s.at(i);
  }
  rep(i,n-1){
    if(s.at(i)!=s.at(i+1)){
      ans++;
    }
  }
  out(ans);
}
//とりあえずvectorで文字列受け取る
//他の文字になるまでループ回してみる
