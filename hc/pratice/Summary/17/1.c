// 程序的执行结果为4
//                 12
#include <stdio.h>

int main(int argc,char *argv[])
{
    int t = 4;
    //t-- 之后依然是个整形数据
    printf("%lu\n",sizeof(t--));
    //全部按单个字符计算，不要忘记'\0'和一些转义字符
    printf("%lu\n",sizeof("ab c\nt\012\xal*2"));
    return 0;
}
