#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    
    // 输入包含空格
    //getline(cin,s);


    //运用+=对字符串进行操作
   /* s+="hello";
    s+=" world";
    s+='5';
    s+=10;         //10在ascii码是\n
    int a=5;
    s+=5+'0';
    */


    
    string s="5418340";
   // s1=s1.substr (0,-1);   // 索引为0，截断到最后
  
   /* for(int i=0;i<s1.length();i++)
    {
        cout << s1[i] << endl;
    }
    */

    for(auto it =s.begin();it!=s.end();it++)  // 原来是string::iterator 为了方便写成了auto ，这是一种// 迭代器化简
        cout << *it;
    cout <<endl;
    for(string::iterator it=s.begin();it!=s.end();it++)  //迭代器
        cout << *it;
    cout <<endl;
    for(auto x:s)                                       
        cout << x;
    cout << endl;

    //cout << s1 <<endl;
    
       return 0;
}
