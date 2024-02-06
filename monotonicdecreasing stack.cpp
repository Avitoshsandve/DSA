#include <iostream>
#include<stack>
using namespace std;

void monotonicdecreasing(int arr[], int N)
{
	stack<int> stk;

	for (int i = 0; i < N; i++) 
    {

		while (stk.size() > 0 && stk.top() < arr[i]) {
			stk.pop();
		}
		stk.push(arr[i]);
	}

	int N2 = stk.size();
	int ans[N2] = { 0 };
	int j = N2 - 1;


	while (!stk.empty())
    {

		ans[j] = stk.top();
		stk.pop();
		j--;
	}

	
	cout << "The Array: ";
	for (int i = 0; i < N; i++) 
    {

		cout << arr[i] << " ";
	}
	cout << endl;

	
	cout << "The Stack: ";
	for (int i = 0; i < N2; i++) 
    {

		cout << ans[i] << " ";
	}
	cout << endl;
}


int main()
{
	int arr[] = { 15, 27, 12, 69, 14, 11 };
	int N = sizeof(arr) / sizeof(arr[0]);
    dmonotonicdecreasingS(arr, N);
    return 0;
}

