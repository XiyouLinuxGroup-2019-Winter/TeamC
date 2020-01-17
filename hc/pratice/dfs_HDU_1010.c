#include <stdio.h>
void dfs(int x,int y,int step);
char map[10][7];
int book[10][7];
int m,n,p,q,time,step,min=-999999;
int main()
{
    int i,j;
    while(1)
    {
        int startx,starty;
        scanf("%d %d %d",&n,&m,&time);
        if(n==0&&m==0&&time==0)
            return 0;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                scanf("%c",&map[i][j]);
        //printf("%c\n",map[2][2]);
        startx=1,starty=1;
        book[startx][starty]=1;//此点已经走过
        dfs(startx,starty,0);
        printf("%d %d",min,time);
/*        if(min==time)
            printf("yes");
        else
            printf("no");    */        
    }
    return 0;
}
void dfs(int x,int y,int step)
{
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int tx,ty,k;
   // printf("%d %d ",x,y);
   // printf("%c\n",map[x][y]);
    if(map[x][y]=='D')
    {
        //printf("%d %d\n",x,y);
        if(step<min)
            min=step;
        return ;
    }
    for(k=0;k<=3;k++)
    {
        tx=x+next[k][0];
        ty=y+next[k][1];
        if(tx<1 || tx>n ||ty<1 || ty>m)
            continue;
        //判断该点是否为障碍物或者还没有走过去
        if(map[tx][ty]!='X' && book[tx][ty]!=1)
        {
            book[tx][ty]=1;
            dfs(tx,ty,step+1);
            book[tx][ty]=0;
        }
    }
    return ;
}
