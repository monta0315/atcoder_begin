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
  vector<int> a(n);
  int max = 0;
  rep(i, n)
  {
    cin >> a.at(i);
    if(max<a.at(i)){
      max = a.at(i);
    }
  }
  int max_cnt = 0;
  int max_num = 0;
  for (int i = 2; i <= max; i++)
  {
    int cnt = 0;
    rep(j,n){
      if(a.at(j)%i==0){
        cnt++;
      }
    }
    if(max_cnt<cnt){
      max_cnt = cnt;
      max_num = i;
    }
  }
  out(max_num);
}
