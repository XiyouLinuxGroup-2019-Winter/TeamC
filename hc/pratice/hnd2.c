#include <stdio.h>
#include<string.h>
int main()
{
    char str1[10000];
    char str2[10000];
    int a[10000];
    int i,j,k;
    while(scanf("%s",str1)!=-1&&scanf("%s",str2)!=-1)
    {
        j=strlen(str2);
        int flag=0;
        int m;
        int n;
        strcat(str1,str1);
        k=strlen(str1);
        for(i=0,m=0;i<=k-1;i++)
        {
            if(str1[i]==str2[0])
            {
                a[m]=i;
                m++;
            }
        }
        int l;
        for(i=0;i<m;i++)
        {
            flag=0;
            l=a[i];
            for(n=0;n<=j-1;n++)
            {
                if(str1[l]==str2[n])
                {
                    flag++;
                    l++;
                }
            }
            //printf("%d %d ",flag,j);
            if(flag==j)
            {
                printf("yes\n");
                break;
            }
            else
                continue;
        }
        if(i>=m)
            printf("no\n");
        memset(str1,'\0',sizeof(str1));
        memset(str2,'\0',sizeof(str2));
    }
    return 0;
}

