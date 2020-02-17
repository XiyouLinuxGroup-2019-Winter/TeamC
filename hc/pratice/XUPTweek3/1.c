#include <stdio.h>
int map[10][10],book[10][10];
int record[100][100];
int s;
int flag=0;
void dfs(int x,int y,int step);
int main()
{
    int i,j;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&map[i][j]);
    book[0][0]=1;
    dfs(0,0,0);
    printf("(0, 0)\n");
    for(i=0;i<s;i++)
    {
        printf("(%d, %d)",record[i][0],record[i][1]);
        if(i!=s-1)
            printf("\n");
    }
    return 0;
}

void dfs(int x,int y,int step)
{
    int next[4][2] = {{ 0 , 1 }, //右
                      { 1 , 0 }, //下
                      { 0 , -1 },//左
                      {-1 , 0}}; //上
    int tx,ty,k;
      if(x==4 && y==4)
      {
         s=step;
         flag=1;
         return ;
      }
    for(k=0;k<4;k++)
    {
        if(flag)
            return ;
        tx=next[k][0]+x;
        ty=next[k][1]+y;
        if(map[tx][ty] == 0 && book[tx][ty] == 0 && tx>=0&&tx<5&&ty>=0&&ty<5)
        {
            book[tx][ty]=1;
            record[step][0]=tx;
            record[step][1]=ty;
            dfs(tx,ty,step+1);
            book[tx][ty]=0;
        }
    }
    return;
}
