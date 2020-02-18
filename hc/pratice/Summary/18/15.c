#include <stdio.h>

void fun(int *a,int N);
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int N = 9;
    fun(a,9);
    for(int i=0;i<N;i++)
        printf("%d",a[i]);
    return 0;
}
//类似于冒泡的想法
void fun(int *a,int N)
{
    for(int i=0;i<N/2;i++)  //控制循环的趟数
    {
        for(int j=0;j!=N-1;j++) 
            if(a[j] % 2 == 0)
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
