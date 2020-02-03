#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int n,m;
int w[1050],v[1050],s[1050],f[1050];
int i,j;
int main()
{
    cin >> n >> m;
    for(i = 1 ;i <= n ; i++ ) 
        cin >> w[i] >> v[i] >> s[i];
    for(i = 1; i <= n; i++)
    {
        for(j = m;j >= w[i];j-- )
        {
            for(int k = 1; k <= s[i]; ++k) 
                    if(j>=k*w[i])
                            f[j] = max(f[j], f[j-k*w[i]]+k*v[i]);
        }
    }  
    cout << f[m]<<endl;
    return 0;
}                          
