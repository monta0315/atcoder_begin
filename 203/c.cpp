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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n), b(n);
  vector<pair<ll, ll>> store(n);
  rep(i, n)
  {
    ll c, d;
    cin >> c >> d;
    store.at(i).first = c;
    store.at(i).second = d;
  }
  e(store);
  ll now = 0;
  rep(i, n)
  {
    if (store.at(i).first - now <= k)
    {
      if (store.at(i).first == now)
      {
        k += store.at(i).second;
      }
      else
      {
        k += store.at(i).second - (store.at(i).first - now);
      }
      now = store.at(i).first;
    }
    else
    {
      break;
    }
  }
  out(now + k);
}
//素直に実装してみる
//i番目にいる友達の村の番号から現在いる村の番号までがKより小さければok
//
