#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

bool solve(string s){
  if(s.length()==1){
    return s == "8";
    //sが”８”ならtrueをリターンする
  }
  else if(s.length()==2){
    if(stoi(s)%8==0){
      return 1;
      //trueをリターンしている
    }
    swap(s.at(0), s.at(1));
    return stoi(s) % 8 == 0;
  }
  vector<int> cnt(10);
  for(char x:s){
    cnt.at(x - '0')++;
  }//このfor文の書き方はstring sの中のchar 一要素ずつをxとして見ている
  for (int i = 112; i < 1000;i+=8){
    auto c = cnt;
    for(char x:to_string(i)){
      //to_stringでint型をstring型に変えて処理している
      c[x - '0']--;
    }
    if (all_of(c.begin(), c.end(), [](int x)
      {
      return x >= 0;
      }))
        //もともとストックしている1~9を削っていき、全部耐えたら、それは８の倍数になる要素をもちきっていたことになる
       return 1;
    }
  return 0;
}

int main(){
  string s;
  cin >> s;
  puts(solve(s) ? "Yes" : "No");
}
