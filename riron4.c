#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<omp.h>
#define rep(i,n) for(int i=0; i <(n); i++)
#define N 61

char tango=[20][10]={{"いちょう"},
                     {"いるか"},
                     {"うさぎ"},
                     {"うま"},
                     {"うるし"},
                     {"かめ"},
                     {"からす"},
                     {"ぎかい"},
                     {"こあら"},
                     {"ごりら"},
                     {"しもばしら"},
                     {"すいか"},
                     {"ずけい"},
                     {"まゆ"},
                     {"めだか"},
                     {"ゆず"},
                     {"らいう"},
                     {"らっこ"},
                     {"おうらん"},
                     {"りんご"}};

char list[N][N];

int change(s){
  　　　if(s=='あ'){return 0;}else if(s=='い'){return 1;}else if(s=='う'){return 2;}else if(s=='え'){return 3;}else if(s=='お'){return 4;}
  else if(s=='か'){return 5;}else if(s=='き'){return 6;}else if(s=='く'){return 7;}else if(s=='け'){return 8;}else if(s=='こ'){return 9;}
  else if(s=='さ'){return 10;}else if(s=='し'){return 11;}else if(s=='す'){return 12;}else if(s=='せ'){return 13;}else if(s=='そ'){return 14;}
  else if(s=='た'){return 15;}else if(s=='ち'){return 16;}else if(s=='つ'){return 17;}else if(s=='て'){return 18;}else if(s=='と'){return 19;}
  else if(s=='な'){return 20;}else if(s=='に'){return 21;}else if(s=='ぬ'){return 22;}else if(s=='ね'){return 23;}else if(s=='の'){return 24;}
  else if(s=='は'){return 25;}else if(s=='ひ'){return 26;}else if(s=='ふ'){return 27;}else if(s=='へ'){return 28;}else if(s=='ほ'){return 29;}
  else if(s=='ま'){return 30;}else if(s=='み'){return 31;}else if(s=='む'){return 32;}else if(s=='め'){return 33;}else if(s=='も'){return 34;}
  else if(s=='や'){return 35;}else if(s=='ゆ'){return 36;}else if(s=='よ'){return 37;}
  else if(s=='ら'){return 38;}else if(s=='り'){return 39;}else if(s=='る'){return 40;}else if(s=='れ'){return 41;}else if(s=='ろ'){return 42;}
  else if(s=='わ'){return 43;}else if(s=='っ'){return 44;}else if(s=='ん'){return 45;}
  else if(s=='が'){return 46;}else if(s=='ぎ'){return 47;}else if(s=='ぐ'){return 48;}else if(s=='げ'){return 49;}else if(s=='ご'){return 50;}
  else if(s=='ざ'){return 51;}else if(s=='じ'){return 52;}else if(s=='ず'){return 53;}else if(s=='ぜ'){return 54;}else if(s=='ぞ'){return 55;}
  else if(s=='だ'){return 56;}else if(s=='ぢ'){return 57;}else if(s=='づ'){return 58;}else if(s=='で'){return 59;}else if(s=='ど'){return 60;}
}

int main(){
  rep(i,20){
    int len=strlen(tango[i]);
    rep(j,len-1){
      if(tango[i][j])
    }
  }

}
