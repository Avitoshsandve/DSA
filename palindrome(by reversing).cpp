#include<iostream>
#include<string>
using namespace std;
string reversestring(string str1)
{
    string str2=str1;
    reverse(str2.begin(),str2.end());
    if(str1==str2)
    {
        return "true";
    }
    else
    {
        return "false";
    }

}
int main()
{
    string str1="RACECAR";
    cout<<reversestring(str1);
    return 0;
}