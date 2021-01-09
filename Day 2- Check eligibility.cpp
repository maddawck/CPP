#include<iostream>
using namespace std;

void Eligible(int age)
{
    
     if(age<12 || age>50)
        cout<<"eligible";
    else
        cout<<"not eligible";
}


int main()
{
    int a;
    cout<<"Enter an age\n";
    cin>>a;
    Eligible(a);

    return 0;
}
