#include<iostream>
using namespace std;

void Draw(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter the number of rows\n";
    cin>>a;
    Draw(a);

    return 0;
}
