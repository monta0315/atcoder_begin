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


int main(){
  int n;cin>>n;
  vector<vector<char>>s(n);
  vector<string>store;
  rep(i,n){
    bool ok = false;
    string a;
    cin>>a;
    rep(j,a.length()){
      if(!(a.at(j)>='a'&&a.at(j)<='z')){
        s.at(i).push_back(a.at(j));
        ok = true;
      }
    }
    if(!ok){
        s.at(i).push_back('t');
      }
  }
  regex re(R"((\d{3})-(\d{2})-(\d{2})-(\d{8})-[A-Z])");
  rep(i,n){
    if(s.at(i).size()!=20){
      continue;
    }
    string b="";
    rep(j,20){
      b+=s.at(i).at(j);
    }
    if(regex_match(b,re)){
      store.push_back(b);
    }
  }
  e(store);
  if(store.size()!=0){
    rep(i,store.size()){
      out(store.at(i));
    }
  }else{
    out("JUNK");
  }
}
//eraseするのではなく、元から配列に入れない
