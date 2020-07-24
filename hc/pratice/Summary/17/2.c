// 该程序的输出结果为1200 60
//                   1270 5
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 10, b = 20, c = 30;
   /* 
      要理解，printf 函数的执行过程:
        1.先将printf（）函数的参数从左到右读取，然后依次入栈
        2.完成之后，从栈顶开始处理。
        3.由此可以看出，该函数在处理printf()的参数时，是从右向左处理的
    */
    printf("%d %d\n", b = b*c , c = c*2 ) ;
    /*
        printf() 函数的返回值，是被打印的字符数
    */
    printf("%d\n", printf("%d ", a+b+c));
    return 0;
}
