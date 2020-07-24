#include <iostream>
#include<queue>
#include<algorithm>
#include<cstdio>
using namespace std;
int map[5][5],book[20][20];
int s;
int flag=0;
queue<int> c1,c2;
void dfs(int x,int y);
int main()
{
    flag=0;
    int i,j;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&map[i][j]);
  //  book[0][0]=1;                      //0,0不能刚开始就记录在book数组里面
    dfs(0,0);
    while(!c1.empty())
    {
        printf("(%d, %d)\n",c1.front(),c2.front());
        c1.pop();
        c2.pop();
    }
    return 0;
}

void dfs(int x,int y)
{
    int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    if(x==4 && y==4)
    {
        c1.push(x);
        c2.push(y);
        flag=1;
        return ;
    }
    else if(x>4 || y>4 ||x<0 ||y<0)
        return ;
    if(map[x][y]==0 && book[x][y]==0)
    {
        c1.push(x);
        c2.push(y);
        book[x][y]=1;
        for(int i=0;i<4;i++)
        {
            x+=next[i][0];
            y+=next[i][1];
            dfs(x,y);
            if(flag)
                break;
        }
    }
}
