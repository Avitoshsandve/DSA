#include <iostream> 
using namespace std;
int largestElement(int arr[], int n) {
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"max vallue is="<<max<<endl;

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    largestElement(arr,n);
    return 0;
}
