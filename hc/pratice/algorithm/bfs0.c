#include <stdio.h>
struct note
{
    int x;
    int y;//横纵坐标
    int s;//用来存储步数
};
struct note que[2501];//  队列成员的个数
int a[51][51];// 用来存储地图
int book[51][51];// 用来记录已经走过的点，一定要明白起点刚开始就要记录下来
int main()
{
    int next[4][2]=
    {
        {0,1},// 向右走
        {1,0},//向下走
        {0,-1},//向左走
        {-1,0},//向上走
    };
    int head,tail;
    int n,m;// n行m列的迷宫地图
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    int p,q,startx,starty;// 起点坐标和终点坐标
    scanf("%d %d %d %d",&startx,&starty,&p,&q);
    // 队列的初始化
    head=1;tail=1;
    // 起点入队，并标记
    que[tail].x = startx;
    que[tail].y = starty;
    que[tail].s = 0;
    tail++;
    book[startx][starty]=1;
    int flag;
    flag=0;// 用来标记是否到达目标点，0表示未到达，1表示到达
    while(head<tail)
    {
        int k;
        int tx,ty;
        for(k=0;k<=3;k++)
        {
            tx=que[head].x + next[k][0];
            ty=que[head].y + next[k][1];
            // 判断是否越界
            if(tx<1 || tx>n || ty<1 || ty>m)
                continue;
            // 判断是否是障碍物或者已经在路径中
            if(a[tx][ty] == 0 && book[tx][ty] == 0)
            {
                // 将这个点标记已经走过
                // 注意广搜每个点只入队一次，所以和深搜不同，不需要将book数组还原
                book[tx][ty]=1;
                // 插入新的点到队列中
                que[tail].x=tx;
                que[tail].y=ty;
                que[tail].s=que[head].s+1;
                tail++;
            }
            if(tx == p && ty==q)
            {
                flag=1;
                break;
            }
        }
        if(flag == 1)
            break;
        head++;
    }
    printf("%d",que[tail-1].s);
    return 0;
    return 0;
}

