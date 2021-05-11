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
  int n;
  cin>>n;
  vector<int>a(n),b(n);
  rep(i,n){
    cin>>a.at(i)>>b.at(i);
  }
  int a_min=1000000;
  int b_min=1000000;
  int a_do,b_do;
  int sum;
  int mi=1000000;
  rep(i,n){
    if(a.at(i)<a_min){
      a_min=a.at(i);
      a_do=i;
    }
    if(b.at(i)<b_min){
      b_min=b.at(i);
      b_do=i;
    }
  }
  if(a_do==b_do){
    sum=a_min+b_min;
    if(a_min>b_min){
      a_min=1000000;
      rep(i,n){
        if(i!=a_do&&a.at(i)<a_min){
          a_min=a.at(i);
        }
      }
      if(a_min>sum){
        out(sum);
      }else{
        out(a_min);
      }
    }else if(b_min==a_min){
      rep(i,n){
        if(i!=a_do){
          mi=min(min(a.at(i),b.at(i)),mi);
        }
      }
      if(mi>sum){
        out(sum);
      }else{
        out(mi);
      }
    }else{
      b_min=1000000;
      rep(i,n){
        if(i!=b_do){
          b_min=min(b_min,b.at(i));
        }
      }
      if(b_min>sum){
        out(sum);
      }else{
        out(b_min);
      }
    }
  }else{
    out(max(a_min,b_min));
  }
}
//簡単なパターンとしてAの最小値のiとBの最小値のiが別の場合それの大きい方が出力値となる
//Aの最小値のiとBの最小値のiが一緒の場合は最小値の大きい方の最小値をもう一度出し直す．当初の最小値のA+Bの値と新しく算出した最小値の小さい方を出力する．
