#include<iostream>
using namespace std;

int naturalsum(int n)
{
    if(n==0){
        return 0;
    }
    else{
        return(n+naturalsum(n-1));
    }
};

int main()
{
    int n;
    cout<<"the number to calculate sum of first n natural numbers: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is "<<naturalsum(n);
    return 0;
}