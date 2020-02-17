#include <stdio.h>

void f();
int main()
{
    f();
    f();
    f();
    f();
    f();

    return 0;
}
//静态局部变量的生存期为整个源文件期间
void f() 
{
    static int a = 0;
    int b = 0;
    printf("%d, %d\n", ++a, ++b);
}
//1 1
//2 1
//3 1
//4 1
//...
