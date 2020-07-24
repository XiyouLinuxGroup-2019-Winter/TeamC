/*
 找到两个限制条件为 所有银行的钱数 以及 被抓的概率 由于被抓的概率不能做
 数组的下标，所以我们需要将所能偷盗的钱数用下标表示，然后将每次偷盗钱数
 所用的概率算出来，最后逆序遍历以便。
*/
#include <iostream>
#include <algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 5000;
int  f[N];
double s[N];
double m[N];
int main()
{
    int v,i,j;
    double n;
    int count;
    scanf("%d",&count);
    while(count--)
    {
        memset(f,0,sizeof(f));
        memset(s,0,sizeof(s));
        int sum=0;
        cin >> n >> v;
        for(i=1;i<=v;i++)
        {
            cin>> f[i] >> s[i];
            sum += f[i];
        }
        memset(m,0,sizeof(m));
        m[0]=1.0;
        for(i = 1;i<=v; i++ )    // 物品的数目
        {
            for(j = sum ;j>=f[i];j--)
            {
                m[j]=max(m[j],m[j-f[i]]*(1-s[i]));
            }
        }
        for(i=sum;i>=0;i--)
        {
            if(m[i]>=(1-n))
            {
                printf("%d\n",i);
                break;
            }   
        }
    }
       return 0;
}
