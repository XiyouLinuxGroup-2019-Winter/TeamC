#include<unordered_map>//   --> 底层是一个无序的哈希结构   ----->不可排序，如果要排序，必须转为 vector
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first>b.first;

}

int main()
{
    //构造
    unordered_map<int,int> m;
    m[6]=3;
    m[5]=8;
    m[4]=9;
    vector<pair<int,int>> v(m.begin(),m.end());
    sort(v.begin() ,v.end(),cmp);
    for(auto tmp:v)
    {
        cout <<tmp.first<<tmp.second<<endl;
    }
    // 两种打印方法
/*
    for(auto it=m.begin();it!=m.end();it++)
        cout <<it->first<<" "<<it->second<<endl;

    for(auto tmp:m)
    {
        cout << tmp.first <<" "<<tmp.second<<endl;
    }
*/
    return 0;
}

