#include <stdio.h>

int main()
{
    int a=0x12345678;
    char *t;
    t=(char *)&a;
    printf("0x%x\n",*t);
    return 0;
}

