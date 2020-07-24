/*
f[i] 表示总体积是i的情况下，最大价值是多少
result = max{F[0...m]}
状态转移方程（从前往后考虑每个物品）

*/


#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int n,m;
int w[1050],v[1050],f[1050];
int i,j;

int main()
{
    cin >> n >> m;
    for(i = 1 ;i <= n ; i++ )
        cin >> w[i] >> v[i];
    for(i = 1; i <= n; i++)
        for(j = w[i];j <= m;j++ )
            f[j]=max(f[j],f[j-w[i]]+v[i]);
    cout << f[m] <<endl;
    return 0;
}
