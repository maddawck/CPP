#include<iostream>
using namespace std;


void Working(int hour)
{
     if(hour>=9 && hour<=18)
        cout<<"working";
    else
        cout<<"leisure";
    
}


int main()
{
    int a;
    cout<<"Enter number of hours\n";
    cin>>a;
    Working(a);

    return 0;
}
