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

bool binary_search(string s,vector<string>&store){
  //if(store.size()==0){return true;}
  int right = store.size();
  int left = -1;
  while(right-left>1){
    int mid = left + (right-left)/2;
    if(store.at(mid)>=s){
      right = mid;
    }else{
      left = mid;
    }
  }
  if(store.at(right)==s){
    return false;
  }else{
    return true;
  }
}

int main(){
  vector<string> store{"e869120","atcoder","square1001"};
  e(store);
  out(binary_search("atcoder",store));
}
