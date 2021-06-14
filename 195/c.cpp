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
  string n;cin>>n;
  vector<char>s;
  vector<int>store(6);
  rep(i,n.length()){
    s.push_back(n.at(i));
  }
  s.insert(s.begin(),16-s.size(),'0');
  for(int i=4;i>=0;i--){
    string p="";
    p+=s.at(i*3+1);
    p+=s.at(i*3+2);
    p+=s.at(i*3+3);
    store.at(i+1) = stoi(p);
  }
  ll sum = 0;
  for(int i=0;i<5;i++){
    sum += (store.at(6-i-1)+1)*store.at(6-i-2)*(i+1);
  }
  out(sum);
}
