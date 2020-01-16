#include <stdio.h>


void dfs(int step);

int a[10],book[10],n;
int main()
{
    printf("请输入一个和数字（1～9）");
    scanf("%d",&n);
    dfs(1);
    //站在第一个盒子面前
    getchar();getchar();
    return 0;


    return 0;
}

void dfs(int step)
{
    int i;
    if(step==n+1)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");

        return ;        //返回之前的一步（最近一次调用dfs函数的地方）

    }
    //在第step个盒子里面该放哪张牌？
    //依次尝试
    for(i=1;i<=n;i++)
    {
        if(book[i]==0)
        {
            a[step]=i;
            //第i张牌已经放进第step个盒子里面了
            book[i]=1;
            //牌已经放进盒子里面了，不再手中了
            dfs(step+1);
            book[i]=0;
            //因为有循环操作，所以要将牌收回;
        }
    }
    return ;
}
