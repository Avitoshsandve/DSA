#include<iostream>
using namespace std;

void revstr(string str)
{
    if(str.size()==0)
    {
        return;
    }
    else
    {
        revstr(str.substr(1));
        cout<<str[0];

    }


};
int main()
{
    string str1="Avitocodes";
    revstr(str1);
    return 0;	
}