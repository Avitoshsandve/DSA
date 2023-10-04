#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    //array declaration with size given

    int arr1[]={2,4,6,8};
    //array declaration without size given
    
    
    int arr2[4];
    for(int i=0;i<4;i++) //array declaration after initialization
    {
        arr2[i]=(int)i*2;{
            cout<<arr2[i]<<endl;
        }
    }
    return 0;
}