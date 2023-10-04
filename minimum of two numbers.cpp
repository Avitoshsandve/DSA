#include<iostream>
using namespace std;
 int min(int a,int b)
 {
    if(a<b)
    return a;
    else
    return b;
 }
int main()
{
    int a=15,b=25;
    int minimum=min(a,b);
    cout<<"minimum is:"<<minimum;
    return 0;

 }