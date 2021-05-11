#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
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
  ll num;
  cin>>num;
  ll l1 = 999;
  ll l2 = 999999;
  long long l3 = pow(10,10)-1;
  long long l4 = pow(10,13)-1;
  long long cnt=0;
  if(getdigit(num)<=3){
  }else if(getdigit(num)<=6){
    cnt+=num-l1;
  }else if(getdigit(num)<=9){
    cnt+=num-l1;
    cnt+=num-l2;
  }else if(getdigit(num)<=12){
    cnt+=num-l1;
    cnt+=num-l2;
    cnt+=num-l3;
  }else{
    cnt+=num-l1;
    cnt+=num-l2;
    cnt+=num-l3;
    cnt+=num-l4;
  }
  out(cnt);
}
