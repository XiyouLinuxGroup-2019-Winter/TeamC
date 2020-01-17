#include<stdio.h>
int book[1000000];
int main()
{
    int n,i,j;
    int a[100000][3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            if(book[a[i][j]]==0)
                printf("%d\n",a[i][j]);
            book[a[i][j]]=1;
        }
    }
    return 0;
}
