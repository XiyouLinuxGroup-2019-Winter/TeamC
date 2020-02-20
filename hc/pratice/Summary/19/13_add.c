#include <stdio.h>

int main()
{
    int a=0x12345678;
    char *t;
    t=(char *)&a;
    if(*t == 0x78)
        printf("小端\n");
    else
        printf("大端\n");
    return 0;
}

