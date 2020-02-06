//AcWing  多重背包1问题，由于给的数据范围小，三重循环时间复杂度并不会导致超时，所以用三重循环

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
        cin >> w[i] >> v[i] >> s[i]; // 此处也可以不用数组，将每次输入的数据直接用于处理也可以
    for(i = 1; i <= n; i++)
    {
        for(j = m;j >= w[i];j-- )
        {
            for(int k = 1; k <= s[i] && k*w[i] <= j; ++k) 
                            f[j] = max(f[j], f[j-k*w[i]]+k*v[i]);
        }
    } 
    cout << f[m]<<endl;
    return 0;
}                          
