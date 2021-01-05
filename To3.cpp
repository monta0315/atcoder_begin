#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;



int main(){
  string s;
  cin >> s;
  int ans = 10000;
  for (int tmp; tmp < (1 << s.length()); tmp++)
  {
    int num = 0;
    int cnt = 0;
    bitset<18> bit(tmp);
    rep(i,s.length()){
      if(bit.test(i)){
        num += int(s.at(i));
      }
    }
    if(num%3==0){
      rep(k,s.length()){
        if(bit.test(k)){
          cnt++;
        }
      }
      if (ans > s.length()-cnt&&cnt>0)
      {
        ans = s.length() - cnt;
      }
    }
  }
  if(ans==10000){
    out(-1);
  }else{
    out(ans);
  }
}
//3の倍数は各位の桁数の総和が３の倍数になれば良い
//bit全探索で18桁の二進数で0,1判定をして、それに該当する桁数の和を出して３の倍数だったら０の数をカウントする
//cntのミニマムを出力する
