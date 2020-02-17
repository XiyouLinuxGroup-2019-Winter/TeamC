#include <stdio.h>
#include<string.h>

#define swap(a, b)  ((a)=(a)+(b),(b)=(a)-(b),(a)=(a)-(b))
void swap1(double *a, double *b,int size1);

int main()
{
    double a=1.67,b=2.666;
    printf("%lf %lf\n",a,b);
    swap1(&a,&b,8);
    //swap(a, b);
    printf("%lf %lf\n",a,b);
    return 0;
}

void swap1(double *a, double *b,int size1)
{
    char temp[8];
    memcpy(temp,a,size1);
    memcpy(a,b,size1);
    memcpy(b,temp,size1);
}

