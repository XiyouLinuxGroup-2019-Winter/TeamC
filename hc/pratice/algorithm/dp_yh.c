#include<bits/stdc++.h>
using namespace std;
int dp[3][20005];
struct Node{
    int v,w,s;
    bool operator<(const Node b)const{
        return (double)w/v>(double)b.w/b.v;
    }
}node[1005];
int main()
{
    int n,m,mx=0;
    cin >> n >> m;
    for(int i=1;i<=n;++i){
        cin >> node[i].v >> node[i].w >> node[i].s;
    } 
    sort(node+1,node+n+1);
    for(int i=1;i<=n;++i){
        int user[20005]={0};
        memcpy(dp[i%2],dp[(i-1)%2],sizeof(int)*m);
        for(int j=node[i].v;j<=m;++j){
            if(dp[(i-1)%2][j-node[i].v]+node[i].w>=dp[i%2][j-node[i].v] && user[j-node[i].v]>=node[i].s && dp[(i-1)%2][j-node[i].v]+node[i].w>=dp[i%2][j]){
                user[j]=1;
                dp[i%2][j]=dp[(i-1)%2][j-node[i].v]+node[i].w;
            }
            else{
                if(user[j-node[i].v]+1<=node[i].s && dp[i%2][j]<dp[i%2][j-node[i].v]+node[i].w){
                    dp[i%2][j]=dp[i%2][j-node[i].v]+node[i].w;
                    user[j]=user[j-node[i].v]+1;
                }
            }
            mx=max(mx,dp[i%2][j]);
        }
    }
    cout << mx << endl;
    return 0;
}
对比了二进制的快了一倍，对比单调队列就快了一点,而且改后的代码看着超麻烦
