#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    deque<int> d;
    //4 9 1 2
    d.push_back(1);
    d.push_back(2);
    d.push_front(9);
    d.push_front(4);
    sort(d.begin(),d.end());
    for(auto tmp:d)
        cout << tmp <<endl;
    for(auto it=d.begin();it!=d.end();it++)
        cout << *it<<endl;
       return 0;
}
