#include <stdio.h>

struct q
{
    char a;
    int b;
    double c;
};

struct p
{
    int f;
    struct q j;
    double d;
    char e;
};
//可以展开为
/*
struct p
{
    int f;          //占8个字节
    struct q        
    {
        char a;
        int b;       //前两个占8个字节
        double c;    //最大的8字节
    }
    double d;       //8
    char e;         //8
};
*/

int main()
{
    struct p m;
    printf("sizeof = %lu\n",sizeof(m));    //5*8 = 40

    return 0;
}

