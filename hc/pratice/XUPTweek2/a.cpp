#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 1050;


int p[N],v[N],f[N];
int main()
{
    int n,m,i,j;
    int count;
    cin >> count;
    while( count-- )
    {
        memset(p,0,sizeof(p));
        memset(v,0,sizeof(v));
        memset(f,0,sizeof(f));
        cin >> n >> m;
        for(i=1;i<=n;i++)
            cin >> p[i];
        for(i=1;i<=n;i++)
            cin >> v[i];
        for(i=1;i<=n;i++)
        {
            for(j=m;j>=v[i];j--)
            {
                f[j]=max(f[j],f[j-v[i]]+p[i]);
            }
        }
        cout << f[m] <<endl;
    }

       return 0;
}
