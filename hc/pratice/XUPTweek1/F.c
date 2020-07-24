#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[1000];
    int n,i,j;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        int sum=0;
        fgets(str,1000,stdin);
        for(j=0;j<strlen(str)-1;j++)
        {
            if(isdigit(str[j]))
                sum++;
        }
        printf("%d\n",sum);
    }

    return 0;
}

