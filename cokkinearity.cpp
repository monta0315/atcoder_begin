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
  vector<int> x(n), y(n);
  vector<int> cnt1(2010), cnt2(2010);
  rep(i, n)
  {
    int a, b;
    cin >> a >> b;
    x.at(i) = a;
    y.at(i) = b;
  }
  for (int i = 0; i < n - 2;i++){
    for (int j = i + 1; j < n - 1;j++){
      for (int k = j + 1; k < n;k++){
        if((x.at(j)-x.at(i))*(y.at(k)-y.at(i))==(x.at(k)-x.at(i))*(y.at(j)-y.at(i))){
          out("Yes");
          exit(0);
        }
      }
    }
  }
  out("No");
}
//直線上にある条件
//x軸に平行、y軸に平行
//二点固定で、一点目と二点目の傾きと一点目と三点目の傾きが等しかったらおk
