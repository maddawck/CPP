#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    int a;int b;int c;
    cout<<"Enter the coefficient for x^2, x and the constant respectively\n";
    cin>>a>>b>>c;


    float root1,root2;

    if(((b*b)-(4*a*c))>=0)
    {

      root1=(-b+sqrt(b*b-4*a*c))/(2*a);
      root2=(-b-sqrt(b*b-4*a*c))/(2*a);

      cout<<"the roots are :\n"<<root1<<"\n"<<root2;
    }
    else
    cout<<"Imaginary roots";

    return 0;
}
