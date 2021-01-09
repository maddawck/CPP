#include<iostream>
using namespace std;

void max(int x,int y)
{
    
    if(x>y)
    {
        cout<<x;
    }
    else
    {
        cout<<y;
    }
}

int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    max(a,b);
    
    return 0;
}
