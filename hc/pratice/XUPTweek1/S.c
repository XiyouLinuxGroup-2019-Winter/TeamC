#include <stdio.h>
void sort(int a[],int n);
int main()
{
   int a[1000];
   int N,i,max,min;
   scanf("%d",&N);
   for(i=0;i<N;i++)
       scanf("%d",&a[i]);
   sort(a,N);
   if(N%2!=0)
       printf("%d",a[N/2]);
   else
       printf("%d",a[N/2-1]);
    return 0;
}
void sort(int a[],int n)
{
    int temp,flag;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        flag=1;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1)
            break;
    }
}

