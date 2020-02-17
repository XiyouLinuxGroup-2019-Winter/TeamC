#include <stdio.h>
// | 是位运算符， || 是逻辑运算符 与 
int main(int argc, char *argv[]) 
{
    //与上题类似，把它们先按照int型的数字处理，写出它们在计算机内部的样子，然后截取一个字节
    char x = -2, y = 3;
    char t = (++x) | (y++);  //-1
    printf("x = %d, y = %d, t = %d\n", x, y, t);
    t = (++x) || (y++);   //1
    printf("x = %d, y = %d, t = %d\n", x, y, t);
}
