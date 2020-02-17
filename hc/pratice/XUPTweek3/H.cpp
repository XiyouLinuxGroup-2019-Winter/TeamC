#include <algorithm>
using namespace std;
int a[100001],N,C;
bool cal(int x)
{
    int cnt=1,temp=a[0];
    for(int i=1;i<N;i++)
      if(a[i]-temp>=x)
      {
         cnt++;
         temp=a[i];
         if(cnt==C)
            return true;
      }
      return false;
}
int main()
{                                                     
    scanf("%d%d",&N,&C);
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
    sort (a,a+N);
    int low=0,height=a[N-1]-a[0],mid;
    while(low<=height)
    {
        mid=(low+height)/2;
        if(cal(mid))
            low=mid+1;
        else
            height=mid-1;
    }
   printf("%d\n",low-1);
}
