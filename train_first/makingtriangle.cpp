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
  int n;
  cin>>n;
  vector<int>l(n);
  rep(i,n){
    cin>>l.at(i);
  }
  int cnt = 0;
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
        if(l.at(i)!=l.at(j)&&l.at(i)!=l.at(k)&&l.at(j)!=l.at(k)){
          if(l.at(i)+l.at(j)>l.at(k)&&l.at(i)+l.at(k)>l.at(j)&&l.at(k)+l.at(j)>l.at(i)){
            cnt++;
          }
        }
      }
    }
  }
  out(cnt);
}
