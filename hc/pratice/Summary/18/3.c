#include <stdio.h>

static int a = 2018;

static void func(void)
{
    static int b;    
    //静态存储区，程序运行结束才会释放其内存空间
    //如果没有初始化，系统会在bss区分配一个内存空间，并且赋值为0
    //如果初始化，只能初始化一次
    printf("a = %d, b = %d\n",a++,++b);
}

int  main(int argc ,char *argcv[])
{
    func();    //2018    1
    func();    //2019    2
    func();    //2020    3
    return 0;
}
