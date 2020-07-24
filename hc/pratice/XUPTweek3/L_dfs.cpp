#include <iostream>
#include<cstdio>
#include<algorithm>
#include<stdio.h>
using namespace std;
const int N = 200; 
int n,s,m;
int flag=9999999;
int book[N][N][N];
void dfs(int a,int b,int c,int step);
int main()
{
    while(scanf("%d%d%d",&s,&n,&m)!=EOF)
    {
        if(s==0&&n==0&&m==0)
            return 0;
        if(s%2!=0)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            book[s][0][0]=1;
            dfs(s,0,0,0);
            printf("%d",flag);
        }
    }
       return 0;
}

void dfs(int a,int b,int c,int step)
{
    if(b == s/2 && c == s/2)
    {
        if(flag >step)
        {
            flag = step;
        }
        return ;
    }

    //a->b
    if(a>0 && b<n)
    {
        int temp=min(a,n-b);
        if(book[a-temp][b+temp][c]==0)
        {
            book[a-temp][b+temp][c]=1;
            dfs(a-temp,b+temp,c,step+1);
            book[a-temp][b+temp][c]=0;
        }
    }
    //a->c
    if(a>0 && c<m)
    {
        int temp=min(a,m-c);
        if(book[a-temp][b][c+temp]==0)
        {
            book[a-temp][b][c+temp]=1;
            dfs(a-temp,b,c+temp,step+1);
            book[a-temp][b][c+temp]=0;
        }
    }
    //b->a
    if(b>0 && a<s)
    {
        int temp=min(b,s-a);
        if(book[a+temp][b-temp][c+temp]==0)
        {
            book[a+temp][b-temp][c]=1;
            dfs(a+temp,b-temp,c,step+1);
            book[a+temp][b-temp][c]=0;
        }
    }
    //b->c
    if(b>0 && c<m)
    {
        int temp=min(b,m-c);
        if(book[a][b-temp][c+temp]==0)
        {
            book[a][b-temp][c+temp]=1;
            dfs(a,b-temp,c+temp,step+1);
            book[a][b-temp][c+temp]=0;
        }
    }
    //c->a
    if(c>0 && a<s)
    {
        int temp=min(c,s-a);
        if(book[a+temp][b][c-temp]==0)
        {
            book[a+temp][b][c-temp]=1;
            dfs(a+temp,b,c-temp,step+1);
            book[a+temp][b][c-temp]=0;
        }
    }
    //c->b
    if(c>0 && b<n)
    {
        int temp=min(c,n-b);
        if(book[a][b+temp][c-temp]==0)
        {
            book[a][b+temp][c-temp]=1;
            dfs(a,b+temp,c-temp,step+1);
            book[a][b+temp][c-temp]=0;
        }
    }
}
