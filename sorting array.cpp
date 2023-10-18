#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original Array: ";
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + size);

    cout << "Sorted Array: ";
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
