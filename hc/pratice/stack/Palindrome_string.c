#include <stdio.h>
#include<string.h>
int main()
{
    char a[101],s[101];
    int i,len,mid,next,top;
    //fgets(a,101,stdin);  
   // printf("\n");//不可用
    scanf("%s",a);
    len=strlen(a);
    mid=len/2-1;
    //栈的初始化
    top=0;
    //mid前的字符全部入栈
    for(i=0;i<=mid;i++)
    {
        s[++top]=a[i];
    }
    if(len%2==0)
    {
        next=mid+1;
    }
    else
    {
        next=mid+2;
    }
    //开始匹配
    for(i=next;i<=len-1;i++)
    {
        if(a[i]!=s[top])
            break;
        top--;
    }
    if(top==0)
    {
        printf("yes");        
    }
    else
    {
        printf("no");
    }
    return 0;
}

