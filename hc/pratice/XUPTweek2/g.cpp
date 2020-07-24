#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;
set<string> p;
int main()
{
    string s,temp;
    while (cin>>s)
    {
        for (int i = 0;i < s.size();i ++)
        {
            if (isalpha(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = ' ';
        }
        stringstream str1(s); 
        while (str1>>temp)
            p.insert(temp); 
    }
    for (auto i = p.begin();i != p.end();i ++)
    {
        cout<<*i<<endl;
    }
    return 0;    
}  
