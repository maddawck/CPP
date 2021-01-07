//program to calculate the volume of a cylinder

#include <iostream>

using namespace std;

int main()
{
  int r,h; //radius and height of the cylinder;
  float volume;
  cout<<"Enter the radius and the height of the cylinder respectively"<<endl;
  cin>>r;
  cin>>h;
  volume=3.14*r*r*h;
  cout<<"The volume of the cylinder is "<<volume;
  
  return 0;
  
}
