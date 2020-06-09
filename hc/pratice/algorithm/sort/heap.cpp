#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
#define N 100

//排序的数字个数
int num;
int n;
int a[N];

//i是二叉树根结点的编号
void siftdown(int i) //向下调整
{
    int flag = 0,t;
    while(i*2<n && flag == 0)
    {
        //如果有左儿子的情况
        if(a[i*2] < a[i]) t = i*2;
        else t = i;
        //如果有右儿子的情况
        if(i*2+1 < n)
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

void siftup(int i)
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

//建立最小堆
void creat()
{
    for(int i = (n-1)/2 ; i>=0 ; i--)
    {
        siftdown(i);
    }
    return ;
}

//删除最大的元素
int deletemax()
{
    int temp;
    temp = a[0];
    a[0] = a[n-1];
    siftdown(0);
    n--;
    return temp;
}

int main()
{
    printf("请输入数字的个数:");
    scanf("%d",&num);
    for(int i = 0 ; i < num ; i++)
    {
        scanf("%d",&a[i]);
    }
    n = num;
    //创建堆
    creat();
    printf("a[0] = =%d\n\n",a[0]);
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("=======");
    for(int i = 0; i < num; i++)
    {
        printf("%d ",deletemax());
    }
    printf("\n");
   /* 
   */
    return 0;
}

