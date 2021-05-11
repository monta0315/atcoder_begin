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

//フィボナッチ数列に対して作成する
int fibo(int n){
  if (n == 0) return 0;
  else if (n == 1) return 1;
  return fibo(n-1)+fibo(n-2);
}

int main(){
  rep(i,11){
    cout<<i<<"項目の値:"<<fibo(i)<<endl;
  }
}
//これでは、関数の呼び出し回数が大量であり、現実的ではない＝＞二回呼び出すのではなく
