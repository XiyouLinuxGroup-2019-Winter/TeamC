//应用计数，去重
#include <iostream>
#include<set>       //----------------->底层是一个树状结构有序的
#include<unordered_set>    //------------>哈希结构，无序但是快
using namespace std;
int main()
{
    set<int> s;
    s.insert (3);
    s.insert (4);
    s.insert (4);
    s.insert (4);
    s.insert (4);
    cout <<s.size()<<endl;
    for(auto tmp:s)
        cout << tmp<<" ";
    cout <<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout <<*it<<" ";
    }
    cout << endl;


       return 0;
}
