#include <stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,j,n;
    scanf("%d",&n);
    getchar();
    for(j=0;j<n;j++)
    {
        int num1=0,num2=0,num3=0,num4=0,num5=0;    
        fgets(str,100,stdin);
       // printf("\n");
        for(i=0;i<strlen(str)-1;i++)
        {
            if(str[i]=='a')
                num1++;
            if(str[i]=='e')
                num2++;
            if(str[i]=='i')
                num3++;
            if(str[i]=='o')
                num4++;
            if(str[i]=='u')
                num5++;
        }
        printf("a:%d\n",num1);
        printf("e:%d\n",num2);
        printf("i:%d\n",num3);
        printf("o:%d\n",num4);
        printf("u:%d\n",num5);
        if(j<n-1)
            printf("\n");
        memset(str,'\0',sizeof(str));
    }
    return 0;
}

