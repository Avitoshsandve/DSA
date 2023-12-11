#include <iostream>
using namespace std;
void insertionsort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
    }
}

int main()
{
    int arr[] = {9, 6, 96, 69, 696};
    cout << "Sorted array is:" << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
