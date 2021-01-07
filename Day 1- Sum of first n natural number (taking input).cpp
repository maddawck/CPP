//program to print the sum of first n natural numbers

#include <iostream>

using namespace std;

int main()
{
  int n,sum;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  sum=n*(n+1)/2;
  cout<<"The sum of "<<n<<" natural numbers is = "<<sum;
  return 0;
}
