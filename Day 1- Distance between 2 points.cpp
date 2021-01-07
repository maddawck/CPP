//program to calculate the distance between two points

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x1,y1,x2,y2;
  float dist;
  
  cout<<"Enter the coordinates of the first point"<<endl;
  cin>>x1>>y1;
  cout<<"\nEnter the coordinates of the second point"<<endl;
  cin>>x2>>y2;
  
  dist= sqrt(pow((x2-x1),2)*pow((y2-y1),2));
  cout<<"\nThe distance between the 2 points is "<< dist;
  
  return 0;
  
}
