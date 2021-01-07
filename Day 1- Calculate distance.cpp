//program to find the distance when the inital and the final velocity are taken as input

#include <iostream>

using namespace std;

int main()
{
  float distance;
  int u, v, a;
  cout<<"Enter initial velocity- ";
  cin>>u;
  cout<<"Enter final velocity- ";
  cin>>v;
  cout<<"Enter acceleration- ";
  cin>>a;
  
  distance= (v*v - u*u)/(2*a);
  cout<<"\nThe distance covered is "<<distance;
  
  return 0;
}
