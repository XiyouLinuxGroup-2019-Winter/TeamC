#include <stdio.h>
#include<stdlib.h>
int a = 0;   // 初始化的全局变量 ：保存在数据区
int b;       //未初始化的全局变量：保存在bss段
int main()
{
    int c; // 未初始化的局部变量：保存在栈上
    char d[] = "Linux";  
    //"Linux" 这个字符串常量保存在常量区，不可修改
    //d数组保存在栈区，并将Linux\0这个字符串复制到d数组里面，这个数组可以随意修改但是字符串不可以更改
    char *e; //保存在栈上
    char *p = "Linux Group";
    //p保存在栈上
    //与上面的数组不同的是，指针是直接指向常量区的，所以不可以做如下操作,否则会发生段错误
    //*(p+1)='2';   
    static int f = 0;    // 初始化的静态局部变量：保存在数据区
    e = (char *)malloc(sizeof(char)*20); //分配20字节区域保存在堆上
    free(e);
    return 0;
}

