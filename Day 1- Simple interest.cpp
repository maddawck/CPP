//program to calculate the simple interest

#include <iostream>

using namespace std;

int main()
{
  int p,t;
  float si, r;
  cout<<"Enter the principal amount, rate and time respectively"<<endl;
  cin>>p;
  cin>>r;
  cin>>t;
  si= p*t*r/100.0;
  cout<<"The simple interest is "<<si;
  
  return 0;
  
}
