#include<iostream>
using namespace std;

void Max3(int a,int b,int c)
{

if(a > b && a > c)
    {
        cout<<a;
    }
    else
    {
        if(b > c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }

}

int main()
{
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    Max3(a,b,c);

    return 0;
}
