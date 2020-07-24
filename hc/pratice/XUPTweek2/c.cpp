#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 10000;
const int inf=1e9+7;
int v[N],w[N],f[N];
int main()
{
    int T;
    int start,end,count;
    cin >> T;
    while(T--)
    {
        memset(v,0,sizeof(v));
        memset(w,0,sizeof(w));
        memset(f,0,sizeof(f));
        scanf("%d%d",&start,&end);
        int flag=end-start;
        cin >> count;
        for(int i=0;i<=flag;i++)
            f[i]=inf;
        f[0]=0;                     
        for(int i=0;i<count;i++)
            cin >> v[i] >> w[i];
        for(int i=0;i<=count;i++)
        {
            for(int j= w[i];j<=flag;j++) 
            {
                for(int k=1;k<=count && k*w[i]<=j;k++)
                    f[j]=min(f[j],f[j-w[i]]+v[i]);
            }
        }
        if(f[flag]<inf)
            printf("The minimum amount of money in the piggy-bank is %d.\n",f[flag]);
        else
            printf("This is impossible.\n");
    } 
    return 0;
}
