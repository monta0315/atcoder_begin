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
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}

int func(int i,int x,const vector<int> &a){
  if(i == 0){
    if(x == 0){
      return true;
    }else{
      return false;
    }
  }

  if (func(i-1,x,a)) return true;

  if (func(i-1,x-a.at(i-1),a)) return true;

  return false;
}

int main(){
  int n;cin>>n;
  vector<int> a(n);
  rep(i,n){
    cin>>a.at(i);
  }
  int x;cin>>x;
  if (func(n,x,a)) cout << "Yes" << endl;
  else out("No");
}
//再帰関数は計算量との戦いであり、メモ配列を用いることで、多少解決することができる。
