#include<iostream>
#include<string>
#include<string.h>
using namespace std;

void reversestring(string &str){
    stack<char>st;
    for(int i=0;i<str.length();i++)
    st.push(str[i]);
    
    for(int i=0;i<str.length();i++)
    {
        str[i]=st.top();
        st.pop();
    }

}
int main()
{
    string str="DSA";
    reversestring(str);
    cout<<str;
    return 0;
    }