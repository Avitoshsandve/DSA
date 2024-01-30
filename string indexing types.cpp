#include<iostream>
#include<string.h>
using  namespace std;
int main()
{
    string str="DSA is easy";
    int index=2;
    cout<<"By traversing: "<<str[index]<<endl;

    string strr="Consistency is important";
    cout<<"By at() function: "<<strr.at(4)<<endl;

    string strre="Avitoshlearns";
    cout<<"The substring of given string is: "<<strre.substr(2,5)<<endl;

    string sttr="consistencyiskey";
    cout<<"The index of given first occurence of substring is: "<<sttr.find("sist")<<endl;

    string sstr="RACECAR";
    cout<<"The index of first character is: "<<sstr.find_first_of("A")<<endl;
    cout<<"The index of last element is: "<<sstr.find_last_of("A")<<endl;

    return 0;
}