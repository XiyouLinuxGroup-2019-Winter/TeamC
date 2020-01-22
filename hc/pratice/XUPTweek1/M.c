#include <stdio.h>

int main()
{
    long long  n;
    scanf("%lld",&n);
    if(n==0)
        printf("%lld",n);
    else if((n+1)%2==0)
        printf("%lld",(n+1)/2);
    else
    {
        printf("%lld",n+1);
    }
    return 0;
}

