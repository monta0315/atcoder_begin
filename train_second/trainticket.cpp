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
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){
int main(){
  string s;
  cin>>s;
  vector<char>k;
  int sum=ctoi(s.at(0));
  int num1=0;
  int num2=0;
  for(int tmp=0;tmp<(1<<s.length()-1);tmp++){
    int sum=ctoi(s.at(0));
    bitset<3>b(tmp);
    for(int i=0;i<s.length()-1;i++){
      if(b.test(i)){
        sum+=ctoi(s.at(i+1));
      }else{
        sum-=ctoi(s.at(i+1));
      }
    }
    if(sum==7){
      k.push_back(s.at(0));
      rep(i,3){
        if(b.test(i)){
          k.push_back('+');
        }else{
          k.push_back('-');
        }
        k.push_back(s.at(i+1));
      }
    k.push_back('=');
    k.push_back('7');
    rep(i,k.size()){cout<<k.at(i);}
    out("");
    exit(0);
  }
}
}
