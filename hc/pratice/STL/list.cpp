#include <iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(6);
    li.push_front(5);
    //在前面/后面插入一个元素
    li.emplace_front(9);
    li.emplace_back(10);
    li.insert (++li.begin(),2);
    for(auto tmp:li)
        cout<<tmp<<endl;
       return 0;
}
