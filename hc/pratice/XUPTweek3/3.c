#include <stdio.h>
#include<iostream>
#include<string.h>
char map[100][100];
int book[100];
int n,k,flag,count;
void dfs(int cont);
int main()
{

    while(scanf("%d%d",&n,&k)!=EOF)
    {
        int i,j;
        if(n==-1 && k==-1)
            return 0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                std::cin >> map[i][j];
        dfs(0);
        printf("%d\n",count);
        flag=0;count=0;
        memset(book,0,sizeof(book));
    }
    return 0;
}
void dfs(int cont)
{
    if(flag == k)
    {
        count++;
        return ;
    }
    if(cont>=n)
        return ;
    for(int j=0;j<n;j++)
    {
        if(map[cont][j] == '#' && book[j] == 0)
        {
            book[j]=1;
            flag++;
            dfs(cont+1);
            flag--;
            book[j]=0;
        }
    }
    dfs(cont+1);
}
