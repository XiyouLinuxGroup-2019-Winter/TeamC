#include <stdio.h>
struct icd
{
    int a;
    char b;
    double c;
};
//16

struct cdi
{
    char a;
    double b;
    int c;
};
//24


int main(int argc,char *arhv[])
{
    printf("%zu %zu\n",sizeof(struct icd),sizeof(struct cdi));

    return 0;
}
//结构体内存对齐
