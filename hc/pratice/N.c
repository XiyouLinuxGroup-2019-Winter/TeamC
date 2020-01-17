#include <stdio.h>

int main()
{
    int i,j,k,N;
    while(scanf("%d",&N)!=EOF)
    {
        int a[30]={1};
        for(i=0;i<N;i++)
        {
            for(j=i;j>0;j--)
                a[j]=a[j]+a[j-1];
            for(k=0;k<=i;k++)
                printf("%d",a[k]);
            printf("\n");
        }

            printf("\n");
    }
    return 0;
}

