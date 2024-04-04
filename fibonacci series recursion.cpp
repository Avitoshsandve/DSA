#include <iostream>
using namespace std;
int fiboseries(int x) 
{
   if((x==1)||(x==0))
   {
      return(x);
   }
   else 
   {
      return(fiboseries(x-1)+fiboseries(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fiboseries(i);
      i++;
   }
   return 0;
}