#include <stdio.h>

int main()
{
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);
    int sum1,sum2,sum3,sum=0;
    sum1=d1+d2;
    sum2=d1+d3;
    sum3=d2+d3;
    if(d3<=sum1)
        sum=sum+d3;
    else
        sum=sum+sum1;
    if(d2<=sum2)
        sum=sum+d2;
    else
        sum=sum+sum2;
    if(d1<=sum3)
        sum=sum+d1;
    else
        sum=sum+sum3;
    printf("%d",sum);
    return 0;
}
