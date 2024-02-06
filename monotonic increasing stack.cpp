#include <iostream>
#include <stack>
using namespace std;

void monoincreasing(int arr[], int n)
{
    stack<int> stackk;
    for (int i = 0, i < n; i++)
    {
        while (stackk.size() > 0 && stackk.top() > arr[i])
        {
            stackk.pop();
        }
        stackk.push(arr[i]);
    }
    int N = stackk.size();
    int ans[N] = {0};
    int j = N - 1;

    while (!stackk.empty())
    {
        ans[j] = stackk.top();
        stackk.pop();
        j--;
    }

    cout << "The correct array is:";
    for (int i = 0; i < n; i++)
        [cout << ans[i] << " " << endl;
        ]

            cout
            << "Monotonic Increasing Stack is: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << " " << endl;
    }
}

int main()
{
    int arr[] = {3, 4, 5, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    monoincreasing(arr, n);
    return 0;
}
