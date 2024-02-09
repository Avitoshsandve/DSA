#include<iostream>
#include<stack>
using namespace std;
int main() 
{
    stack<int> stacker;
    stacker.push(10);
    stacker.push(20);
    stacker.push(40);
    cout<<"Top of stack is: "<<stacker.top()<<endl;
    cout << "Size of the Stack: " << stacker.size() << endl;
    return 0;
}
