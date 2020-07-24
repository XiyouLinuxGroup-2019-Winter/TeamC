#include <stdio.h>

int Convert(const char *num);
int main()
{
    char *str = "12345";
    int res = Convert (str);
    printf("%d\n",res);
    return 0;
}
int Convert(const char *num)
{
    int res=0;
    int i=0,flag=1;
    while((*(num+i))!='\0')
    {
        res=(*(num+i)-48)+res*flag;
        flag=10;
        i++;
    }
    return res;
}
