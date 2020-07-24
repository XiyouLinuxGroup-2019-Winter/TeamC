#include <iostream>
using namespace std;
const int N = 1000;
int a[N],q[N];
int main()
{
    int n,k;
    cin >> n >>k;
    for(int i=1;i<=k;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        q[i] = i + 1;
    int flag=0;
    for(int i=1;i<=k;i++)
    {
            flag=(flag+a[i])%n;
        printf("%d",q[flag]);
        for(int j = flag;j<n;j++)
        {
                q[j]=q[(j+1)];
        }
        if(i<k)
            printf(" ");
        if(i==k)
            printf("\n");
        n--;
    }
    return 0;
}
