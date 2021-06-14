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
#define getdigit(n) log10(n) + 1
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;
const long long INF = 1LL << 60;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}

string ltrim(const string &);
string rtrim(const string &);



long prison(int n, int m, vector<int> h, vector<int> v) {
    vector<int>yoko(m+1,1);
    vector<int>tate(n+1,1);
    if(h.size()==n&&v.size()==m){
      return n*m;
    }else if(h.size()==n){
      for(int i=0;i<v.size();i++){
        yoko.erase(yoko.begin()+v.at(i));
        yoko.at(v.at(i)-1)++;
      }
      ll MAX = 0;
      for(int i=0;i<yoko.size();i++){
        MAX = max(MAX,yoko.at(i));
      }
      return n*MAX;
    }else if(v.size()==m){
      for(int i=0;i<h.size();i++){
        tate.erase(tate.begin()+h.at(i));
        tate.at(h.at(i)-1)++;
      }
      ll MAX = 0;
      for(int i=0;i<tate.size();i++){
        MAX = max(MAX,tate.at(i));
      }
      return m*max;
    }else{
      for(int i=0;i<v.size();i++){
        yoko.erase(yoko.begin()+v.at(i));
        yoko.at(v.at(i)-1)++;
      }
      for(int i=0;i<h.size();i++){
        tate.erase(tate.begin()+h.at(i));
        tate.at(h.at(i)-1)++;
      }
      ll MAX_tate = 0;
      for(int i=0;i<tate.size();i++){
        MAX_tate = max(MAX_tate,tate.at(i));
      }
      ll MAX_yoko = 0;
      for(int i=0;i<yoko.size();i++){
        MAX_yoko = max(MAX_yoko,yoko.at(i));
      }
      return MAX_tate*MAX_yoko;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string h_count_temp;
    getline(cin, h_count_temp);

    int h_count = stoi(ltrim(rtrim(h_count_temp)));

    vector<int> h(h_count);

    for (int i = 0; i < h_count; i++) {
        string h_item_temp;
        getline(cin, h_item_temp);

        int h_item = stoi(ltrim(rtrim(h_item_temp)));

        h[i] = h_item;
    }

    string v_count_temp;
    getline(cin, v_count_temp);

    int v_count = stoi(ltrim(rtrim(v_count_temp)));

    vector<int> v(v_count);

    for (int i = 0; i < v_count; i++) {
        string v_item_temp;
        getline(cin, v_item_temp);

        int v_item = stoi(ltrim(rtrim(v_item_temp)));

        v[i] = v_item;
    }

    long result = prison(n, m, h, v);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
