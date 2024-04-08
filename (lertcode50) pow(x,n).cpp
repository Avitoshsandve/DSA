#include<iostream>
using namespace std;
class Solution {
public:
double hispow(double x,long n)
{
    if(n==0) return 1.0;
        if(n==1) return x;
        if(n<0) return myPow(1/x,-n);
        double result=hispow(x*x,n/2);
        if(n%2) result*=x;
        return result;

}
    double myPow(double x, int n) {
        return hispow(x,n);
        
    };
};

int main()
{
    Solution s;
    cout<<s.myPow(2.0,10)<<endl;
    return 0;
}