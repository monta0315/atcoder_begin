#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl;
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

ll solve(ll a,ll b){
  ll c = 2;
  ll num = 0;
  while (pow(a, c) <= b)
  {
    c++;
    num++;
  }
  if (num == 0)
  {
    return -1;
  }
  else
  {
    return num;
  }
}

int main(){
  ll n,num,ans;
  cin >> n;
  ans = n;
  for (ll i = 2; i <= n; i++)
  {
    num = solve(i, n);
    if (num == -1)
    {
      break;
    }
    else
    {
      ans -= num;
    }
  }
  out(ans);
}
//素因数分解した際に同じ因数しか持たない場合を考える
//手堅く行くとしたらNまでの数字全てに対して素因数分解を行い共通因数が一つではないもの，素数のものの数をカウントアップしていく．
//計算コスト的に素因数分解をするのは現実的ではないし，10^10回ループを回すのも現実的ではない．
//各基数となるものに対してNを超えるまで累乗させその個数をカウントする．
//2^2からスタートする．全部の基数は2乗からスタートする
//終了は2乗した時にNを超える数字が見つかったら．
