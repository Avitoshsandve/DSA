#include<iostream>
using namespace std;

int sumdigit(int n)
{
    if(n==0){
        return 0;
    }
    else{
        return(n%10+sumdigit(n/10));
    }
}
int main()
{
    int n;
    cout<<"Enter the number to calculate sum of digits: ";
    cin>>n;
    int random=sumdigit(n);
    cout<<"Sum of digits of "<<n<<" is "<<random;
    return 0;
}