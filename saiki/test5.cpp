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

int complete_time(vector<vector<int>> &children,int x){
  if(children.at(x).size()==0){
    return 0;
  }
  int max_receive_time = 0;
  for(auto c:children.at(x)){
    int receive_time = complete_time(children,c) + 1;
    max_receive_time = max(max_receive_time,receive_time);
  }
  return max_receive_time;
}
//再帰関数で実装する。
//子ノードがない枝まで潜ってループが分岐地点でmaxを使用する
//再帰ステップはノード潜る、ループ抜けたらmaxの時間を作成する。
//ベースケースのサイズが0になったらリターン1

int main(){
  int n;cin>>n;
  vector<int>p(n);
  p.at(0)=-1;
  for(int i=1;i<n;i++){
    cin>>p.at(i);
  }
  vector<vector<int>>children(n);
  for(int i=1;i<n;i++){
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }
  out(complete_time(children,0));
}
