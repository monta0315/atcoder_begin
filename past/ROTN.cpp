#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  int n;
  cin >> n ;
  string s;
  cin >> s;
  vector<int> h(s.length());
  rep(i,s.length()){
    h.at(i) = s.at(i) - 'A' ;
  }
  rep(i,s.length()){
    h.at(i) += n;
    if(h.at(i)>=26){
      h.at(i) -= 26;
    }
    //out(h.at(i));
  }
  rep(i,s.length()){
    if(h.at(i)==0){
      cout << 'A';
    }
    else
    {
      printf("%c",h.at(i)+'A');
    }
  }
  cout << endl;
}
//アルファベットを整数に変換する
//整数からアルファベットへの変換がわからないからとりあえず整数は条件分岐場面でしか使用しない
//条件分岐で元のアルファベット+Nが26を超えたら1に戻すようにする
