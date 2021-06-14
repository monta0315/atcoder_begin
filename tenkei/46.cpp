#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define fore(i, a) for (auto &a : a)
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
const long long INF = 1LL << 60;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}
int main()
{
  int n;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  rep(i, n)
  {
    cin >> a.at(i);
  }
  rep(i, n)
  {
    cin >> b.at(i);
  }
  rep(i, n)
  {
    cin >> c.at(i);
  }
  ll ans = 0;
  rep(i, n)
  {
    a.at(i) %= 46;
    b.at(i) %= 46;
    c.at(i) %= 46;
  }
  map<ll, ll> a_store, b_store, c_store;
  rep(i, n)
  {
    a_store[a.at(i)]++;
    b_store[b.at(i)]++;
    c_store[c.at(i)]++;
  }
  for (int i = 0; i < 46; i++)
  {
    for (int j = 0; j < 46; j++)
    {
      for (int k = 0; k < 46; k++)
      {
        if ((i + j + k) % 46 == 0 && a_store[i] != 0 && b_store[j] != 0 && c_store[k] != 0)
        {
          ans += a_store[i] * b_store[j] * c_store[k];
        }
      }
    }
  }
  out(ans);
}
//普通にfor文を3回回したのではTLEになる＝＞同じ数字をカウントで求めてまとめる？？
//46の倍数＝＞modを使用する？？mod46をとった結果をカウントでまとめる
//mod46が０になるもの同士を足し合わせてもmod46な気がする
//とりあえず配列の全ての数字をmod46する
//各配列ごとにカウントを求める
//0同士になるものとたしわせた時46になるものをカウントとして出力する。
