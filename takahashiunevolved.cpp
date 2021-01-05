#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;


int main(){
  ll x, y,a,b;
  cin >> x >> y >> a >> b;
  ll ex = 0;
  while(1){
    //while(1)は無限ループ
    if(x>y/a)break;
    if(a*x>=y)
      break;
    if (a * x > x + b)
      break;
    x *= a;
    ex++;
  }
  ex += (y -1- x) / b;
  //y-1になっている理由としてy以上になってはいけないから=>割り切れるとyとxの値が一緒になってしまう
  out(ex);
}
//考え方
//*aか+bかが切り替わるところを見つける
//オーバーフローする原因としてa*xがやばくなる時＝＞条件文で
//whileでやるとTLEする可能性ある足し算が無限に行われる
//*aする部分以降はx/bが経験値になるからそこはwhileしないようにする
