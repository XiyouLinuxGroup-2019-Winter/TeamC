#include <iostream>
#include<stack>
#include<sstream>
using namespace std;
int main()
{
    stack<string> s;
    string str;
    getline(cin,str);
    //用来去除空格
    stringstream ss;
    ss<<str;
    while(ss>>str)
    {
        s.push(str);
    }
    while(!s.empty())
    {
        cout <<s.top();
        s.pop();
    }
    
       return 0;
}
