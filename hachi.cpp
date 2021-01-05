#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(),v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  string s;
  cin>>s;
  vector<int> cnt(10,0);
  int len = s.length();
  rep(i, len)
  {
    cnt.at(s.at(i)-'0')++;
  }
  if(len>2){
    for (int i = 104; i < 1000; i = i + 8)
    {
      vector<int> chk(10,0);
      int a, b, c;
      int num = 0;
      a = i / 100;
      b = (i%100)/10;
      c = i % 10;
      chk.at(a)++;
      chk.at(b)++;
      chk.at(c)++;
      rep(j,10){
        if(chk.at(j)<=cnt.at(j)&&chk.at(j)>0){
          num++;
        }
      }
      if (num >= 3)
      {
        out("Yes");
        exit(0);
      }
    }
    out("No");
  }else if(len==2){
    int a = stoi(s);
    int b = a / 10;
    int c = a % 10;
    int d = c * 10 + b;
    if(a%8==0||d%8==0){
      out("Yes");
    }else{
      out("No");
    }
  }
  else
  {
    if(stoi(s)%8==0){
      out("Yes");
    }else{
      out("No");
    }
  }
}
//下3桁が８の倍数であるなら８の倍数である
//とりあえず4桁以降か4桁以内かで考えてみる
//各位の数の登場回数をカウントする。
