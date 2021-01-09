#include<iostream>
using namespace std;

void OddEven(int n)
{

    if(n%2==0)
        cout<<"even";
    else
        cout<<"odd";
}


int main()
{
    int a;
    cout<<"Enter a number\n";
    cin>>a;
    OddEven(a);

    return 0;
}
