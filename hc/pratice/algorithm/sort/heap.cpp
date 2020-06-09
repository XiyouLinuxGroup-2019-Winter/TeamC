#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
#define N 1000

int n;
int a[N];

//i是二叉树根结点的编号
void siftdown(int i) //向下调整
{
    int flag = 0,t;
    while(i*2<=n && flag == 0)
    {
        //如果有左儿子的情况
        if(a[i*2] < a[i]) t = i*2;
        else t = i;
        //如果有右儿子的情况
        if(i*2+1 <= n)
        {
            if(a[i*2+1] < a[t]) t = i*2+1;
        }
        if(t != i)
        {
            swap(a[i],a[t]);
            i = t;
        }
        else
        {
            flag = 1;
        }
    }
    return ;
}

void sitfup(int i)
{
    int flag = 0;
    while(i!=0 && flag == 0)
    {
        if(a[i] < a[i/2])
        {
            swap(a[i],a[i/2]);
        }
        else
        {
            flag = 1;
        }
        i = i/2;
    }
    return ;
}


int main()
{
    int n = 0;
    for(int i = 0; i < 15; i++)
    {
        scanf("%d",&a[n]);
        sitfup(n);
        for(int i = 0; i < 15; i++)
        {
            printf("a[%d] = %d\n",i,a[i]);
        }
        n++;
    }
    return 0;
}

