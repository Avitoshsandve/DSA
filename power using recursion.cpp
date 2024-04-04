#include<iostream>
using namespace std;
int power( int n1,int n2)
{
    if(n2==0)
        return 1;
        
    else
    return(n1*power(n1,n2-1));
};
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<power(n1,n2)<<endl;
    return 0;
}