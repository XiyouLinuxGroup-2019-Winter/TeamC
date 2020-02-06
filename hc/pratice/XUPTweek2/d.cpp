#include <iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
const int N = 100005;
int m[N],c[N],f[N],book[N];
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==0 && b==0)
            return 0;
        memset(f,0,sizeof(f));
        long count=0;
         for(int i=1;i<=a;i++)
         {
             cin >> m[i];
         }
         for(int i=1;i<=a;i++)
         {
             cin >> c[i];
         }

    for(int i=1;i<=a;i++)
    {
        for(int k=1;k<=c[i];k<<=1)
        {
            c[i]=c[i]-k;
            for(int j=b;j>=m[i]*k;j--)
                f[j]=max(f[j],f[j-k*m[i]]+k*m[i]);
            for(int j=b;j>=m[i]*c[i];j--)
                f[j]=max(f[j],f[j-c[i]*m[i]]+c[i]*m[i]);
        }
    }
    for(int i=1;i<=b;i++)
    {
        if(f[i] == i)
        {
            count++;
        }
    }
    cout << count <<endl;
    }
       return 0;
}
