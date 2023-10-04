#include<iostream>
using namespace std;
 int max(int a,int b)
 {
    if(a>b)
    return a;
    else
    return b;
 }
int main()
{
    int a=15,b=25;
    int maximum=min(a,b);
    cout<<"maximum is:"<<maximum;
    return 0;

 }