#include <stdio.h> 
#define PI 3
int main()
{
    int r,v1,v2;
    while(scanf("%d %d %d",&r,&v1,&v2)!=EOF)
    {
        if(r/v1>PI*r/v2)
        {
            printf("No\n");
        }
        else
            printf("Yes\n");
    }
    return 0;
}

