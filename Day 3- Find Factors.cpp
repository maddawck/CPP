#include<iostream>

using namespace std;

void Factors(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    
}
int main()
{
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    Factors(n);

    return 0;
}
