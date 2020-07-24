#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int i,j;
    while((fgets(str,100,stdin))!=NULL)
    {
        j=strlen(str)-1;
        for(i=0;i<=j;i++)
        {
            if(i==0)
                str[i]=str[i]-32;
            if(isspace(str[i]))
            {
                str[i+1]=str[i+1]-32;
            }
        }
            for(i=0;i<=j;i++)
            {
                printf("%c",str[i]);
            }
    }
    return 0;
}

