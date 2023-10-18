#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index1 = 1; 
    int index2 = 3; 

    
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;

    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
