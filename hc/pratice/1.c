#include <stdio.h>
#include<unistd.h>
int main()
{
    close(1);
    int x=3;
    do
    {
        printf("%3d",x-=2);
    }
    while(!(--x));

    return 0;
}

