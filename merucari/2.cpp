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
#define getdigit(n) log10(n) + 1
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
const long long INF = 1LL << 60;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}

void commonSubstring(vector<string> a, vector<string> b) {
  for(int i=0;i<a.size();i++){
    vector<int>store_a(26,0);
    vector<int>store_b(26,0);
    bool ok = false;
    for(int j=0;j<a.at(i).length();j++){
      store_a.at(a.at(i).at(j)-'a')++;
    }
    for(int j=0;j<b.at(i).length();j++){
      store_b.at(b.at(i).at(j)-'a')++;
    }
    for(int j=0;j<26;j++){
      if(store_a.at(j)!=0&&store_b.at(j)!=0){
        ok = true;
      }
    }
    if(ok){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}
//サイズ分のforと2回文のfor回して一致していたら逐一yes
int main(){}
