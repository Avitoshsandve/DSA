#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main() {

    string str1 = "Hello";
    string str2=(" I'm learning strings");
    str1.append(str2);
    cout<<str1<<endl;

    string str5="and will also learn";
    string str6=" Sliding window";
    str5=str5+str6;
    cout<<str5<<endl;

    char str3[]="Hope to complete it fast";
    char str4[]="   Wish me luck";
    strcat(str3,str4);
    cout<<str3<<endl;
    
    return 0;
}
