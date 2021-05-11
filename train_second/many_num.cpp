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

vector<string> split(string str,char del){
  vector<string>result;
  string subStr;

  for(auto c :str){
    if(c == del){
      result.push_back(subStr);
      subStr.clear();
    }else{
      subStr += c;
    }
  }
  result.push_back(subStr);
  return result;
}

int main(){
  string s;
  cin>>s;
  vector<string>k(pow(2,s.length()-1));
  //長さs.length()-1のビット列を列挙する
  ll sum=0;
  for(int tmp =0;tmp<(1<<s.length()-1);tmp++){
    bitset<10>b(tmp);
    k.at(tmp).push_back(s.at(0));
    for(int i=0;i<s.length()-1;i++){
      if(b.test(i)){
        k.at(tmp).push_back(',');
      }
      k.at(tmp).push_back(s.at(i+1));
    }
  }
  char del = ',';
  for(int i=0;i<pow(2,s.length()-1);i++){
    for(auto substr : split(k.at(i),del)){
      sum += stoll(substr);
    }
  }
  out(sum);
}
//ビット全探索を行う．
//ビットが１の場所にプラスをねじ込む
