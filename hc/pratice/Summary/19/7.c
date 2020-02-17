#include <stdio.h>

#define X a+b

int main(int argc, char *argv[]) 
{
    int a = 1, b = 1;
    printf("%d\n", X*X);   
}
//一定要理解宏的替换过程，不能想当然
//  X*X = a + b * a + b =1 + 1 * 1 + 1 = 3
