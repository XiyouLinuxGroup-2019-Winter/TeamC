#include <stdio.h>
#include<string.h>

struct node
{
    char a;   //1
    short b;  //2
    int c;    //4
};
//4*2=8

int main(int argc, char *argv[])
{
    struct node s;
    memset(&s, 0, sizeof(s));
    s.a = 3;//     0x00 03
    s.b = 5;//     0x00 05
    s.c = 7;//     0x00 00 00 07
    struct node *pt = &s;
    //小端模式------->高地址....低地址  4字节
    //          0x    00 05 00 03
    //                高字节....低字节
    printf("%x\n", *(int*)pt);   
    printf("%d\n",*(int *)pt);
    //小端模式------->高地址....低地址  8字节
    //          0x    00 00 00 07 00 05 00 03
    //                高字节....低字节
    printf("%llx\n", *(long long *)pt);
    printf("%lld\n",*(long long *)pt);
    return 0;
}
