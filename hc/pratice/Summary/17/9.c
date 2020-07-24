#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b = 2, c = 5;
    for(a = 1; a < 4; a++)
    {
        switch(a)
		{
            b = 99;          // 永远不会被用到
            case 2:
                printf("c is %d\n", c);
                break;
            default:
                printf("a is %d\n", a);
            case 1:
                printf("b is %d\n", b);
                break;

        }
    }
    //b is 2
    //c is 5
    //a is 3
    //b is 2
    return 0;
}
