#include <stdio.h>
#include <stdarg.h>

int main()
{
    // 値を格納するエリアを確保する
    va_list val_area = char s[sizeof(int) + sizeof(double) + sizeof(char*)];
    // 値を書き込むためエリア内を移動するポインタ
    char *a_ptr = val_area;

    // エリアに値を順次設定
    int ival1 = 100;
    memcpy( a_ptr, &ival1, sizeof(int) );
    a_ptr += sizeof(int);

    double fval = 3.14;
    memcpy( a_ptr, &fval, sizeof(double) );
    a_ptr += sizeof(double);

    char *str = "piyo";
    memcpy( a_ptr, &str, sizeof(char*) );
    a_ptr += sizeof(char*);

    // 表示
    vprintf( "%d %f %s\n", val_area );
    //delete[] val_area;
}
