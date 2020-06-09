#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#define N 1000
//二叉树的结点个数
int n;
int a[N];

//i是二叉树根结点的编号
void siftdown(int i)
{
    int flag = 0,temp;
    while(i*2<=n && flag == 0)
    {
        if(a[i*2] > a[i])
        {
            swap(a[i*2],a[i]);
        }
        else
        {

        }
    }
}

int main()
{

    return 0;
}

