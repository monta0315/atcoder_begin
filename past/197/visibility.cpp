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
  int h,w,x,y;
  cin>>h>>w>>x>>y;
  vector<string>s(h);
  rep(i,h){
    cin>>s.at(i);
  }
  int ans=1;
  int left=y-1;
  int right=w-y;
  int top=x-1;
  int bottom=h-x;
  //左チェック
  for(int i=1;i<=left;i++){
    if(s.at(x-1).at(y-(i+1))=='.'){
      ans+=1;
    }
    else{
      break;
    }
  }
  //右チェック
  for(int i=1;i<=right;i++){
    if(s.at(x-1).at(y-(1-i))=='.'){
      ans+=1;
    }else{
      break;
    }
  }
  //上チェック
  for(int i=1;i<=top;i++){
    if(s.at(x-(1+i)).at(y-1)=='.'){
      ans+=1;
    }else{
      break;
    }
  }
  //下チェック
  for(int i=1;i<=bottom;i++){
    if(s.at(x-(1-i)).at(y-1)=='.'){
      ans+=1;
    }else{
      break;
    }
  }
  out(ans);
}
