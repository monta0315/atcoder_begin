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
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}
int main(){
  string s;
  cin>>s;
  int num=0;
  vector<char>k;
  rep(i,s.length()){
    k.push_back(s.at(i));
  }
  rev(k);
  rep(i,k.size()){
    if(k.at(i)!='0'){
      break;
    }
    num++;
  }
  rep(i,num){
    s.insert(0,"0");
  }
  if(s == string(s.rbegin(),s.rend())){
    out("Yes");
  }else{
    out("No");
  }
}