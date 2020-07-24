#include <cstdio>
#include <cstring>
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
 
int s, n, m, ans;
bool vis[101][101][101], tg;    //vis中，第一维是瓶子s，第二维是杯子n，第三维是杯子m
 
void dfs(int x, int y, int z, int dep){
    if((x == s/2 && y == s/2) || (x == s/2 && z == s/2) || (y == s/2 && z == s/2)){    //均分了
        tg = true;
        if(ans > dep) ans = dep;
        return ;
    }
    //x->y
    if(x > 0 && y < n){
        int t = min(x, n-y);
        if(!vis[x-t][y+t][z]){
            vis[x-t][y+t][z] = true;
            dfs(x-t, y+t, z, dep+1);
            vis[x-t][y+t][z] = false;
        }
    }
    //x->z
    if(x > 0 && z < m){
        int t = min(x, m-z);
        if(!vis[x-t][y][z+t]){
            vis[x-t][y][z+t] = true;
            dfs(x-t, y, z+t, dep+1);
            vis[x-t][y][z+t] = false;
        }
    }
    //y->x
    if(y > 0 && x < s){
        int t = min(y, s-x);
        if(!vis[x+t][y-t][z]){
            vis[x+t][y-t][z] = true;
            dfs(x+t, y-t, z, dep+1);
            vis[x+t][y-t][z] = false;
        }
    }
    //z->x
    if(z > 0 && x < s){
        int t = min(z, s-x);
        if(!vis[x+t][y][z-t]){
            vis[x+t][y][z-t] = true;
            dfs(x+t, y, z-t, dep+1);
            vis[x+t][y][z-t] = false;
        }
    }
    //y->z
    if(y > 0 && z < m){
        int t = min(y, m-z);
        if(!vis[x][y-t][z+t]){
            vis[x][y-t][z+t] = true;
            dfs(x, y-t, z+t, dep+1);
            vis[x][y-t][z+t] = false;
        }
    }
    //z->y
    if(z > 0 && y < n){
        int t = min(z, n-y);
        if(!vis[x][y+t][z-t]){
            vis[x][y+t][z-t] = true;
            dfs(x, y+t, z-t, dep+1);
            vis[x][y+t][z-t] = false;
        }
    }
}
 
int main(){
    while(scanf("%d%d%d", &s, &n, &m) == 3){
        if(s == 0 && n == 0 && m == 0) break;
        if(s % 2){ puts("NO"); continue; }    //s是奇数
        ans = 0x7fffffff;
        tg = false;
        vis[s][0][0] = true;
        dfs(s, 0, 0, 0);
        if(tg) printf("%d", ans);
        else puts("NO");
    }
    return 0;
}
