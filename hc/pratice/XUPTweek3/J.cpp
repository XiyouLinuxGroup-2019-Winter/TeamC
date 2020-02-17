#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[5000],b[5000],c[5000],d[5000];
int L[10000],R[10000];
int main()
{
    int N;
    cin >> N;
    for(int j=0;j<N;j++)
        cin >> a[j] >> b[j] >> c[j] >>d[j];
    int count1=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        {
            L[count1]=a[i]+b[j];
            count1++;
        }
    int count2=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        {
            R[count2]=(c[i]+d[j])*(-1);
            count2++;
        }
    sort(R,R+count2);
    int count=0;
    int j;
    for(int i=0;i<count1;i++)
    {
        int l=0;int r=count2-1;
        int mid;
        while(l <= r)
        {
            mid=(l+r)/2;
            if(R[mid] == L[i])
            {
                count++;
                for( j=mid+1;j<=r;j++)
                {
                    if(R[j] == L[i])
                        count++;
                    else
                        break;
                }
                for( j=mid-1;j>=l;j--)
                {
                    if(R[j] == L[i])
                        count++;
                    else
                        break;
                }
                break;
            }
            else if(R[mid] < L[i])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}




