#include <stdio.h>
#include<string.h>
int main()
{
    int N;
    char str[1010][20];
    int i,j,k;
    while(1)
    {
        scanf("%d",&N);
        if(N==0)
            return 0;
        for(i=0;i<N;i++)
        {
           scanf("%s",&str[i]);
        }
        int max=0,sum=0;
        for(i=0;i<N;i++)
        {
            sum=0;
            for(j=0;j<N;j++)
            {
                if(strcmp(str[i],str[j])==0)
                    sum++;
            }
            if(sum>max)
            {
                max=sum;
                k=i;
            }
        }
        printf("%s\n",str[k]);
    }
    return 0;
}
