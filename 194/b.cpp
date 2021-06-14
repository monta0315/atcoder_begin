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
const long long INF = 1LL << 60;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}
int main(){
  int n;cin>>n;
  vector<int>a(n),b(n);
  rep(i,n){
    cin>>a.at(i)>>b.at(i);
  }
  int MIN_a_num;
  int MIN_b_num;
  int MIN_a = 1000000;
  int MIN_b = 1000000;
  rep(i,n){
    if(a.at(i)<MIN_a){
      MIN_a = a.at(i);
      MIN_a_num = i;
    }
    if(b.at(i)<MIN_b){
      MIN_b = b.at(i);
      MIN_b_num = i;
    }
  }
  if(MIN_a>MIN_b){
    e(a);
    if(a.at(a.size()-2)>MIN_a+MIN_b){
      out(MIN_a+MIN_b);
    }else{
      out(a.at(a.size()-2));
    }
  }else{
    e(b);
    if(b.at(b.size()-2)>MIN_a+MIN_b){
      out(MIN_a+MIN_b);
    }else{
      out(b.at(n-2));
    }
  }

}
//各仕事のminを求める
//人が一緒の場合その人の値が小さい方の2番目に小さい人に任せるか、その人に任せるかを計算
