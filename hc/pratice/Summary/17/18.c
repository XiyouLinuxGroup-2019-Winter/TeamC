//linux-gcc下指针占8个字节
#include <stdio.h>
//涉及预处理器黏合剂------>详见cpp528页
//
#define NAME(n) x##n    // ## 记号粘合剂   # 转字符串
//变参宏----->详见cpp529页
#define PRINTVAL(y, ...) printf("x"#y":" __VA_ARGS__)  
int main(int argc, char *argv[])
{
    int NAME(1);
    short *NAME(2) = ( short *)&NAME(1);
    char *NAME(3) = (char *)&NAME(1);
    //NAME(1)=x1=0 *NAME(2)=NAME(1)=-1  
    NAME(1) = 0;
    *NAME(2) = -1;
    //%x默认读取4个字节
    //0x0000ffff,以小端模式读取,0xffff
    PRINTVAL(1, "%x\n", NAME(1));
    //printf("x1:""%x\n",x1);
    PRINTVAL(2, "%x\n", *NAME(2));
    //printf("x2:""%x\n",*x2);
    PRINTVAL(3, "%x\n", *NAME(3));
    //printf("x3:""%x\n",*x3);
    return 0;
}
