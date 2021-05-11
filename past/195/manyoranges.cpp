#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
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
int main(){
  int a,b,w;
  cin>>a>>b>>w;
  int min=0;
  int max=0;
  w*=1000;
}
//みかんの個数回ループすることを考えると，みかんminグラムが1gでwのmaxグラムが1000kgだから1000000ループで求められるから全探索する．
//a*n<=w*1000<=b*nが成り立つ場合がokになるため，この場合を満たすか判定し，その中で最大値と最小値を求める
/* using namespace std;
int main(){
  int a,b,w;
  cin >> a >> b >> w;
  int m=1e9,M=0;
  for(int n=1;n<=1000000;n++){
    if(a*n<=1000*w && 1000*w<=b*n){
      m=min(m,n);
      M=max(M,n);
    }
  }
  if(M==0)cout << "UNSATISFIABLE";
  else cout << m << ' ' << M;
} */
