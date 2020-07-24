#include <iostream>
#include<map>    //底层是一个有序的树状结构
using namespace std;
int main()
{
    //构造
    map<int,int> m;
    m[6]=3;
    m[5]=8;
    m[4]=9;
    // 两种打印方法
    for(auto it=m.begin();it!=m.end();it++)
        cout <<it->first<<" "<<it->second<<endl;
    
    for(auto tmp:m)
    {
        cout << tmp.first <<" "<<tmp.second<<endl;
    }
    return 0;
}
