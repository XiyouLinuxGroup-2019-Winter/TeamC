#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int a[4] = { 2, 0, 1, 9 };
    printf("%p, %p\n", a, &a);
    printf("%p, %p\n", a + 1, &a + 1); 
}
// a 是数组首元素的地址
// &a 是整个数组的地址
// a+1相当于a[1]的地址
// &a+1 相当于整个数组之后的地址
