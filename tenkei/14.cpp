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

int binary_search(vector<ll>&a,ll value){
  int right = a.size();
  int left = -1;
  while(right-left>1){
    int mid = left +(right-left)/2;
    if(a.at(mid)<value){
      left = mid;
    }else{
      right = mid;
    }
  }
  return right;
}

int main(){
  int n;cin>>n;
  vector<ll>a(n);
  rep(i,n){
    cin>>a.at(i);
  }
  vector<ll>b(n);
  rep(i,n){
    cin>>b.at(i);
  }
  e(a);
  ll sum = 0;
  rep(i,n){
    int num = binary_search(a,b.at(i));
    if(num==0){
      sum += abs(a.at(num)-b.at(i));
      a.erase(a.begin());
    }else if(abs(a.at(num)-b.at(i)<=abs(a.at(num-1)-b.at(i)))){
      sum += abs(a.at(num)-b.at(i));
      a.erase(a.begin()+num);
    }else{
      sum+=abs(a.at(num-1)-b.at(i));
      a.erase(a.begin()+num-1);
    }
  }
  out(sum);
}
//多分違うけども、
//aをソートしてbの値で二分探索する。
//帰ってきたインデックスに対応するaの前後の値の最小の方をsumに追加し、選ばれたインデックスに対応するaを消去する.
