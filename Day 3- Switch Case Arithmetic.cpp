#include<iostream>

using namespace std;

void ArithOpt(int x,int y, int choice)
{
  
    switch(choice)
    {
        case 1: cout<<x+y;
            break;
        case 2: cout<<x-y;
            break;
        case 3: cout<<x*y;
            break;
        case 4: cout<<x/y;
            break;
    }
    
}

int main()
{
  int x,y,choice;
  cout<<"Enter the numbers and the choice";
  cin>>x>>y>>choice;
  ArithOpt(x,y,choice);
  
  return 0;
}
