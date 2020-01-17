#include <stdio.h>

int main()
{
    int a[10000];
    int i=0,j=0;
    int n,k;
    int count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(a[j]<=k||a[n-1]<=k)
    {
        if(j>=n-1)
            break;
        if(a[j]<=k)
        {
            j++;
            count++;
        }
        if(a[n-1]<=k)
        {
            n--;
            count++;
        }
    }
    if(j==n-1 && a[j]<=k)
        count++;
    printf("%d",count);

    return 0;
}

