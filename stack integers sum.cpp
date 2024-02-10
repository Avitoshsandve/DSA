#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int sum=0;
    stack <int> sumstack;
    sumstack.push(21);
    sumstack.push(26);
    sumstack.push(69);
    sumstack.push(96);

    while(!sumstack.empty())
    {
        sum=sum+sumstack.top();
        sumstack.pop();
    }
    cout<<sum;
    return 0;
}