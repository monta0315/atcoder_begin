#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  long n, k, q;
  cin >> n >> k >> q;
  vector<int> a(q);
  rep(i,q){
    cin >> a.at(i);
  }
  vector<long> score(n, k-q);
  //参加者全員分の点数管理
  rep(i,q){
    score.at(a.at(i)-1)++;
  }
  rep(i,n){
    if(score.at(i)<=0){
      out("No");
    }else{
      out("Yes");
    }
  }
}
//とりあえず全員分引くのは重そうだから正解したやつだけ１足して
//後々、問題数分全員の点数を引き算して、マイナスになったやつが敗退とか？
