#include <stdio.h>

int main()
{
    int a,b;
    // 通过一个中间变量
    int c=a;
        a=b;
        b=c;
    //加减法
    //a = a + b
    //b = b + a - b = a
    //a = a - a + b = b
    a=a-b; b=b+a; a=b-a;
    //异或运算
    // 用Veen图方便理解
    a^=b; b^=a; a^=b;

    return 0;
}
