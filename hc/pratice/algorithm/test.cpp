#include <iostream>
#include<algorithm>
using namespace std;
int w[1050],d[1050],F[1050][1050];
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
    {
        for(j=0;j<=M;j++)
        {
            F[i][j]=F[i-1][j];
            if(w[i]<=j)                                    
                F[i][j]=max(F[i][j],F[i-1][j-w[i]]+d[i]);
            printf("%d ",F[i][j]);
            
        }
        printf("\n");
    }
    int res=0;
    for(i=0;i<=M;i++)
    {
        res = max(res,F[N][i]); 
    }
    cout << res << endl;
    return 0;
}
