#include <stdio.h>

int main()
{
    int a[2000][3];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    int count=0,flag;
    for(i=0;i<n;i++)
    {
        if(a[i][0]==1)
            flag++;
        if(a[i][1]==1)
            flag++;
        if(a[i][2]==1)
            flag++;
        if(flag>=2)
        {
            count++;
        }
        flag=0;
    }
    printf("%d",count);
    return 0;
}
