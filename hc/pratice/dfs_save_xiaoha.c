//迷宫里解救小哈
//book数组用来标记是否走过的点
//a数组用来构建迷宫
#include <stdio.h>
void dfs(int x,int y,int step);
int n,m,p,q,min=9999999;
int a[51][51],book[51][51];
int main()
{
    int i,j,startx,starty;
    //n为地图的行，m为列
    scanf("%d %d",&n,&m);
    //读入地图
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    }
    //读入起点坐标和终点坐标(小哈的坐标)
    scanf("%d %d %d %d",&startx,&starty,&p,&q);
    //从起点开始搜索
    book[startx][starty]=1;//标记起点已经走过，防止重复走

    dfs(startx,starty,0);

    printf("%d",min);
    getchar();getchar();
    return 0;
}
void dfs(int x,int y,int step)
{
    int next[4][2] = {{0,1}//向右走
                     ,{1,0}//向下走
                     ,{0,-1}//向左走
                     ,{-1,0}};//向上走
    int tx,ty,k;
    //判断是否为小哈的位置
    if(x==p && y==q)
    {
        if(step<min)
        {
            //更新步数的最小值
            min=step;
        }
        return;
    }
    //
    for(k=0;k<=3;k++)
    {
        //计算下一个点的坐标
        tx=x+next[k][0];
        ty=y+next[k][1];
        //判断是否越界
        if(tx<1 || tx>n || ty<1 || ty>m)
            continue;
        //判断该店是不是障碍物和该点是否已经走过
        if(a[tx][ty]!=1 && book[tx][ty]!=1)
        {
            book[tx][ty]=1;    //尝试该点
            dfs(tx,ty,step+1);
            book[tx][ty]=0;    //尝试结束，收回该点
        }
    }
    return ;
}

