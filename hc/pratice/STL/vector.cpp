#include <iostream>
#include<vector>// 相当于数组
using namespace std;
int main()
{
    // 如何定义
    vector<int> v;    // 空的
    vector<int> v2(4);  //定义一个4个大小的Vector，初始为0
    vector<int> v3(4,6);// 定义一个4个大小的Vector, 初始为6
    vector<int> v4{1,2,3,4,5}; // 可以用来初始化
    
    //打印 vector
   /* for(auto x:v3)
        cout << x;
    */

    // 获取元素 用at或者[]
    /*
    cout << v4[3];
    cout << v4.at(3);
    */

    //push_back往vector容器里面追加元素
    v4.push_back (6);
    //resize进行重置容器的大小, 不复制默认为0
    v4.resize(10);     
    //erase 删除元素，复杂度为O（n）
    v4.erase(v4.begin());
    // 获取第一个元素
     cout << v4.front();
    // 获取最后一个元素
     cout << v4.back();
     cout << v4[v4.size()-1];//Size获取数组的大小
     cout << *--v4.end();//注意优先级
    //for(auto x:v4)
     //   cout <<x;
    return 0;
}
