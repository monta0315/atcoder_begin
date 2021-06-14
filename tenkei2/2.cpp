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
  vector<string>store;
  for(int tmp =0;tmp<(1<<n);tmp++){
    bool ok = true;
    bitset<20>b(tmp);
    int right = 0;//(->0
    int left = 0;//)->1
    for(int i=0;i<n;i++){
      if(b.test(i)){
        left ++;
      }else{
        right ++;
      }
      if(right<left){
        ok = false;
        break;
      }
    }
    if(left==right&&ok){
      string s="";
      rep(i,n){
        if(b.test(i)){
          s+=')';
        }else{
          s+='(';
        }
      }
      store.push_back(s);
    }
  }
  e(store);
  rep(i,store.size()){
    out(store.at(i));
  }
}
//bit全探索する
//現在の（の数が右カッコの数以下であり、かつ最終的に数が等しくなったら出力
