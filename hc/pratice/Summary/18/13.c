#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct a
{
    char *name;
    int num;
}A;

void func(A **a)
{
    *a = (A *)malloc(sizeof(A));
    (*a)->name = (char *)malloc(sizeof(char)*20);
    strcpy((*a)->name,"XiyouLinuxGroup");
    (*a)->num = 2018;
}
int main(int argc,char *argv[])
{
    A *a;
    func(&a);
    printf("%s %d\n",a->name,a->num);
    free(a);
    free(a->name);
    return 0;
}

