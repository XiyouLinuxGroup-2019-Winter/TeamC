#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 10000; 
int book[N]={0};
int main()
{
    int n,m;
    int a[N];
    int find;
    int count=0;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(a,0,sizeof(a));
        memset(book,0,sizeof(book));
        count++;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            book[a[i]]=1;
        }
        printf("CASE# %d:\n",count);
        for(int i=1;i<=m;i++)
        {
            cin >> find;
             if(book[find]==0)
                printf("%d not found\n",find);
            else if(book[find]!=1)
                printf("%d found at %d\n",find,book[find]);
            else if(book[find]==1)
            {
                int flag=0;
                for(int j=1;j<=n;j++)
                {
                    if(find == a[j])
                    {
                        flag=1;
                        printf("%d found at %d\n",find,j+1);
                        book[find]=j;
                        break;
                    }
                }
                if(flag=0)
                    book[find]=0;
            }
        }
    }
    return 0;
}
