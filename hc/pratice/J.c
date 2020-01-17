#include <stdio.h>

int main()
{
    int a[1000][2],n,i,j;
    int incar=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        incar=incar+(a[i][1]-a[i][0]);
        if(incar>max)
            max=incar;
    }
    printf("%d",max);
    return 0;
}

