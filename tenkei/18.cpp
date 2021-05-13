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
  const double PI = acos(-1);
  double t,l,x,y;
  cin>>t>>l>>x>>y;
  int q;cin>>q;
  vector<double>E(q);
  rep(i,q){
    cin>>E.at(i);
  }
  double now_y,now_z,teihen,takasa;
  rep(i,q){
    double angle = (3.0*PI/2.0)-(2.0*PI*E.at(i))/t;
    now_y = (l/2.0)*cos(angle);
    now_z = (l/2.0)*sin(angle)+l/2;
    //cout<<E.at(i)<<" y座標  "<<now_y<<" z座標 "<<now_z<<endl;
    teihen = sqrt(pow(x,2)+pow(y-now_y,2));
    takasa = now_z;
    decimal10(atan2(takasa,teihen)*(180/PI));
  }
}
//観覧車の現在の座標を出す
//現在のy座標と象のx,y座標から底辺を導出し、現在のz座標から高さを導出する
//俯角をtan^-1高さ/底辺で出力する

//現在の座標の導き方＝＞y座標＝rcos(Ei/T)π z座標=rsin(Ei/T)π
