#include <stdio.h>
#include<string.h>
size_t q(size_t b)
{
    return b;
}
//该函数的返回值是一个函数指针，返回值为size_t (*)(size_t a);
//*****************返回函数指针的问题**************************
//由于()的优先级大于*，所以应该将优先级高的括起来:
//首先p与后面的char *str结合，那么p是一个函数
//其次(p(char *str))再与前面的*结合，说明该函数的返回值是一个指针
//然后,前面的整体再与后面的(size_t a)结合说明该指针指向的是一个返回值为size_t类型的函数
size_t (*(p(char *str)))(size_t a)
{
    printf("%s\n", str);
    return q;
}
//函数的返回值是一个q，这是q函数的地址入口，也是q函数的指针.

int main(int argc, char *argv[])
{
    char str[] = "XiyouLinuxGroup";
    //%lu是无符号长整形
    printf("%lu\n", p(str)(strlen(str)));
    return 0;
}
