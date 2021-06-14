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

class Node {
public:
    Node *next;
    int data;
};

Node* insertIntoList(Node *cur, int data) {
    if(cur == nullptr) {
        cur = new Node();
        cur->data = data;
        cur->next = nullptr;
    }
    else {
        cur->next = insertIntoList(cur->next, data);
    }
    return cur;
}

long long getNumber(Node *head) {
    // Complete this function
    string s = "";
  while(head != NULL){
    //cout<<head->data<<endl;
    s += to_string(head->data);
    head = head->next;
  }
  return stol(s,0,2);
}

int main()
{
    int N;
    cin >> N;
    Node *head = nullptr;

    for(int i = 0; i < (int)N; ++i) {
        int curData;
        cin >> curData;
        head = insertIntoList(head, curData);
    }

    cout << getNumber(head) << endl;

    return 0;
}
