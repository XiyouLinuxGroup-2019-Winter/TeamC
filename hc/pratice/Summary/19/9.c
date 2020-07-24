#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) 
{
    char *p = (char *)malloc(sizeof(char) * 20),
    *q = p;
    scanf("%s %s", p, q);
   // for(int i=0;i<20;i++)
   //     printf("%c\n",q[i]);
    printf("%s %s\n", p, q);
}
//char *q=p;   说明p与q指向的是同一个地址，可以理解为p[20]数组的首元素的地址
//第二次往这个地址里面输入的时候，无论是比第一次输入的字符串的长度长还是短
//都不影响最后的输出结果，因为最后输出是以%s输出的
//
//可以用上面注释的代码来验证疑虑
