#include <stdio.h>

int main(int argc,char *argv[])
{
    int a[5];
    printf("%p\n",a);     //1
    printf("%p\n",a+1);   //2
    printf("%p\n",&a);    //3
    printf("%p\n",&a+1);  //4
    return 0;
}
//1 3 的地址值一样，但是意义不同
//1 数组首元素的地址
//3 整个数组的地址
//2 a[1]的地址 
//4 整个数组的之后的地址值
