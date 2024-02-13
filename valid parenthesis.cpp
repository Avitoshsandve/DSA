#include<iostream>
#include<stack>
using namespace std;

class leetcode20
{
    public:
    bool ismatching(char  a, char b)
    {
        return(a=='(' && b==')') || (a=='[' && b==']' || (a=='{' && b=='}'));
    }
    bool isValid(string s)
    {
        stack<char> stackk;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{'||s[i]=='['||s[i]=='(')
            stackk.push(s[i]);
            else
            {
                if(stackk.empty())
                return false;
                if(ismatching(stackk.top(),s[i]))
                stackk.pop();
                else
                return false;
            }
        }
        if(stackk.empty())
        return true;
        else
        return false;
    }
  
};
