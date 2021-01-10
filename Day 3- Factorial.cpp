#include<iostream>

using namespace std;

void Factorial(int n)
{
    int fact=1;
    
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    cout<<fact;
    
}

int main()
{
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    Factorial(n);

    return 0;
}
