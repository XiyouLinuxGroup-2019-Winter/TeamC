#include <stdio.h>

long long fun(int x);
int main()
{

    int x,temp;

    while(scanf("%d",&x)!=EOF)
    {
      /*  int a=1,b=1;
        if(x==1 || x==2)
        {
            printf("%d\n",1);
            continue;
        }
        for(int i=1;i<x-1;i++)
        {
            temp=a+b;
            a=b;
            b=temp;
        }
        printf("%d\n",temp);
    }
    */
        printf("%lld\n",fun(x));
    }
    
    return 0;
}

long long fun(int x)
{
    if(x == 1 || x==2)
        return 1;
    return fun(x-1)+fun(x-2);
}

