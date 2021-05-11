#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;
const int MOD = 1000000007;

//OpenMPを使うために必要なヘッダファイル
#include<omp.h>
int main()
{
  printf("使用可能な最大スレッド数：%d\n", omp_get_max_threads());

#pragma omp parallel for
  for (int i = 0; i < 10000; i++)
  {
    // 検証用の表示
    printf("thread = %d, i = %2d\n", omp_get_thread_num(), i);
  }

  return 0;
}
