/* 这是对数据大时的优化，方法名称叫“二进制优化”，就是要将数目多的数字拆分。
=> 二进制拆法
7  7以内选多少个数可以使得7中所有的数都可以组合出来  0-7
1 1 1 1 1 1 1

1 2 4
0
1
2
3 =  1 + 2
4 = 4
5 = 1 + 4
6 = 2 + 4
7 = 1 + 2 + 4

给定一个数s，用多少个数可以表示小于等于s的所有数  答案 log2（s）向上取整
s = 10
1 2 4 3
1 2 7 :0-7
3: 0-10
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>
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
        int v,w,s;
        cin >> v >> w >> s;
        for(int k = 1; k <= s ; k*=2 )
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

