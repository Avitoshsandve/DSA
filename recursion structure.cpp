#include<iostream>
using namespace std;

void sleep(int time)
{
    if(time<2)
    return;
    else
    {
        cout<<"I sleep at "<<time<<"'O clock"<<endl;
        sleep(time-1);
        cout<<"I wake up at "<<time<<"'O clock"<<endl;
        return;
    }
}


int main()
{
    int time=3;
    sleep(time);

}
