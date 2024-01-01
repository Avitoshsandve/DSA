#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r,int n)
{
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if (arr[m]==n) 
        return m;
        if(arr[m]<n)
        l=m+1;
        else
        r=m-1;
    }
    return -1;
}



int main()
{
    int arr[]={2,4,8,24,56,69,79};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter element to be searched:";
    int key;
    cin>>key;     
    int result=binarysearch(arr,0,n-1,key);
    (result==-1)
    ?cout<<"Element is not present in array"<<endl
    :cout<<"Element is present at index "<<result<<endl;

    return 0;
}