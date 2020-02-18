#include <stdio.h>
//用来判断二进制数里面1的个数
int f(unsigned int num);
int main()
{
    printf("%d\n",f(2018));
    return 0;
}

int f(unsigned int num)
{
    unsigned int i;
    for ( i = 0; num; i++) 
    {
        num &= (num - 1);
    }
    return i;
}
