#include <stdio.h>

int main()
{
    static int a ;
    printf("%d %d",++a,a++);

    return 0;
}

