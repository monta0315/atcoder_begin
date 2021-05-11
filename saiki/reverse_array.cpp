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

vector<int> reverse_array2(vector<int>&s,int n){
  if(n==s.size()/2){
    return s;
  }

  swap(s.at(n),s.at(s.size()-1-n));
  return reverse_array2(s,n+1);
}

vector<int> reverse_array(vector<int>&s){
  return reverse_array2(s,0);
}

int main(){
  vector<int>p={4,3,2,1};
  reverse_array(p);
  rep(i,p.size()){
    out(p.at(i));
  }
}
