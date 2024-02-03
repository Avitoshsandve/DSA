#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> mystack;
    mystack.push(6);
    mystack.push(9);
    mystack.push(69);
    mystack.push(96);
    int num = 699;
    mystack.push(num);
    mystack.pop();
    mystack.pop();

    while (!mystack.empty())
    {
        cout << mystack.top() << " " << endl;
        mystack.pop();
        cout << "the size of stack is: " << mystack.size() << endl;
        return 0;
    }
}
