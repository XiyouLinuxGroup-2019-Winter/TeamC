#include <iostream>
#include<stack>
using namespace std;
int itob(int decimal);
int main()
{
    //构造
    stack<int> s;
    //操作方法
/*    
    //Push入栈一个元素
    s.push(3);
    s.push(4);
    
    // 输出栈顶的元素//但是不弹出
    cout << s.top();
    
    // 用来弹出栈顶的元素,没有返回值
    s.pop();

    //输出栈的大小
    cout <<s.size()<<endl;
*/
    // 进制转换-----> 10进制转换为2进制
    int decimal=20;
    cout <<itob(decimal) <<endl;
       return 0;
}

int itob(int decimal)
{
    stack<int> s;
    int res;
    while(decimal!=0)
    {
        s.push(decimal%2);
        decimal/=2;
    }    
    while(!s.empty())
    {
        res=res*10+s.top();
        s.pop();
    }
    return res;
}
