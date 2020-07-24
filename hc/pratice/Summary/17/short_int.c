#include <stdio.h>

int main()
{
    short a=-1;
    unsigned int b=a;
    int c=a;
    //short 转 unsigned int 或者 int时:
    //如果short类型的数据是负的，则扩展的高字节位全是1，如果是正的，则全是0 
    printf("%x\n", b);
    printf("%d\n", c);

    a=1;
    b=a;
    c=a;

    printf("%x\n", b);
    printf("%d\n", c);


    return 0;
}
