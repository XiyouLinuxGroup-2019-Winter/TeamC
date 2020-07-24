#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N = 2010;

int n,m;
int f[N];
struct Good
{
    int v,m;
};

int main()
{
    vector<Good> goods;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++ )
    {
        int v[i];
    }
    for(int i = 0 ; i < n ; i++ )
    {
        int w[i];
    }
        for(int k = 1,int i=1; k <= w && i<=n ; k*=2,i++ )
        {
            s-=k;
            goods.push_back({v * k,w * k});
        }
        if(s > 0)
            goods.push_back({v * s,w * s});
    }

    // 01 背包
   for(auto good: goods)
        for(int j = m; j >= good.v ; j-- )
        {
            f[j]=max(f[j],f[j-good.v]+good.m);               
        }
    cout << f[m] <<endl;
    return 0;
}

