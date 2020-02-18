#include <stdio.h>

int main(int argc, char *argv[])
{
    char n[] = { 1, 0, 0, 0 };
    //4个字节
    printf("%d\n", *(int *)n);    //1
    return 0;
}

//0000 0001 0000 0000 0000 0000 0000 0000
//小端模式--->0000 0000 0000 0000 0000 0000 0000 0001

