#include <stdio.h>

int main()
{
    unsigned short a=-1;
    unsigned int b=a;
    int c=a;
//      b   0000ffff
    printf("%x\n", b);
    printf("%d\n", c);
//把unsigned short型数据赋值给int或者unsigned int型数据时，则扩展的高字节位全是0
    a=1;
    b=a;
    c=a;

    printf("%x\n", b);
    printf("%d\n", c);


    return 0;
}
