#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int a = 10;
    int b = -20;
    if (a + b > 0)
    {
        printf("a+b = %d\n", a+b);
    }
    else
    {
        printf("a = %d b = %d\n", a, b);
    }
    return 0;
}
//涉及强制转换  a+b 会被强转为 unsigned int型
//输出时候 %d 带符号输出  所以是a+b = -10
