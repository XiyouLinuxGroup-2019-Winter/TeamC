/*
f[i] 表示总体积是i的情况下，最大价值是多少
result = max{F[0...m]}
状态转移方程（从前往后考虑每个物品）
            for(i=1;i<=N;i++)
                for(j=M;j<=w[i];j--)
                F[j]=max(F[j],F[j-w[i]]+d[i]);                                             
*/

#include <iostream>
#include<algorithm>
using namespace std;
int w[1000],d[1000],F[10000];
int N,M;
int main()
{
    int i,j;
    cin >> N >> M;
    for(i=1;i<=N;i++)
    {
        cin>>w[i]>>d[i];
    }
    for(i=1;i<=N;i++)
        for(j=M;j>=w[i];j--)
        {
                F[j]=max(F[j],F[j-w[i]]+d[i]);
                printf("%d ",F[j]);
        }

/*    int res=0;
    for(i=0;i<=M;i++)
    {
        res = max(res,F[N][i]); 
    }
*/
    cout << F[M] << endl;
    return 0;
}
