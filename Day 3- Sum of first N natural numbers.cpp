#include<iostream>
using namespace std;

void SumOfN(int n)
{
    int sum=0;
    
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}
int main()
{
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  SumOfN(n);
}
