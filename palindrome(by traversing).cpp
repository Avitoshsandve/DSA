#include<iostream>
#include<string>
using namespace std;
string traversestring(string str1){
    for(int i=0;i<str1.length()/2;i++){
        if(str1[i]!=str1[str1.length()-i-1]){
            return "Not palindrome";
            }
    }
    return "It is Palindrome";
}

    

int main() {
    string str1="RACECAR";
    cout<<traversestring(str1);
    return 0;
    }
