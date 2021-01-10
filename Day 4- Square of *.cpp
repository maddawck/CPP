#include<iostream>
using namespace std;

void Draw(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int mmain()
{
  int n;
  cout<<"Enter the dimension of one side of the square";
  cin>>n;
  Draw(n);
  
  return 0;
}
