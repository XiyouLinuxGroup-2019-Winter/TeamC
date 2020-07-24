#include <iostream>
#include<algorithm>
using namespace std;
#define N 101
int a[N];
int n,num;
 
//向下调整
void siftdown(int i)
{
    int t;
    //用来标志是否交换
    int flag = 0;
    //当结点有左孩子时
    while(i*2<=n && flag == 0)
    {
        if(a[i*2] < a[i]) t = i*2;
        else t = i;
        //当结点有右孩子时
        if(i*2+1 <= n)
        {
            if(a[i*2+1] < a[t]) t = i*2+1;
        }
        if(t != i)
        {
            swap(a[t],a[i]);
             i = t;
        }
        else
        {
            flag = 1;
        }
    }
    return ;
}


//创建堆
void creat()
{
    for(int i = n/2 ; i >= 0; i--)
    {
        siftdown(i);
    }
    return ;
}

//堆排序
void heapsort()
{

    while(n >= 0)
    {
        swap(a[n],a[0]);
        n--;
        siftdown(0);
    }
    return ;
}


int main()
{
    printf("请输入数字个数：");
    scanf("%d",&num);
    n = num-1;
    for(int i = 0; i < num ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    creat();
    for(int i = 0; i < num ;i++)
    {
        printf("%d ",a[i]);
    }
    heapsort();
    for(int i = 0; i < num ;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
