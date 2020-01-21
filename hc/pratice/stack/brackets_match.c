#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000],s[1000];
    int i,len,next,mid,top,count=0;
    int N;
    scanf("%d",&N);
    while(N--)
    {
        count=0;
        scanf("%s",a);
        len=strlen(a);
        mid=len/2-1;
        top=0;
        for(i=0;i<=mid;i++)
        {
            s[++top]=a[i];
        }
        if(len%2==0)
            next=mid+1;
        else
            next=mid+2;
        for(i=next;i<=len-1;i++)
        {
            if(a[i]==')' && s[top]=='(')
                count++;    
            --top;
        }
        printf("%d",count);
        if(N>=1)
            printf("\n");
    }
    return 0;
}

