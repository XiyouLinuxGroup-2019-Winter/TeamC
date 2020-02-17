#include <stdio.h>
int main(int argc, char *argv[]) 
{
    for (unsigned int i = 3; i >= 0; i--)
        putchar('=');
}

//unsigned的数都比0大，unsigned int 类型的范围为0～2^32-1
