#include<iostream>
using namespace std;
 void linearsearch(int a[],int n)
 {
    int temp=-1;
    for( int i=0;i<n;i++)
    {
        if(a[i]==n)
        {
            cout<<"Element found successfully at index no:"<<i<<endl;
            temp=0;
        }
    }
    if(temp==-1)
    {
        cout<<"Element not found";
    }
 }
 int main()
 {
    int a[]={2,22,222,69,96,6969};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Enter the number you want to search: ";
    int key;
    cin>>key;
    linearsearch(a,key);
    return 0;
 } 