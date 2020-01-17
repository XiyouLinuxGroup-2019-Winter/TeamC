#include <stdio.h>

int main()
{
    int N,i,j;
    int part1,part2,sum=0;
    while(scanf("%d",&N)!=EOF)
    {
        sum=0;
        part1=N/2;
        part2=N-part1;
        for(i=1;i<part1;i++)
            sum=sum+i;
        for(j=1;j<part2;j++)
            sum=sum+j;
        printf("%d\n",sum);
    }

    return 0;
}

