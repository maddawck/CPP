#include<iostream>
using namespace std;

void CheckAge(int age)
{

     if(age>=12 && age<=50)
        cout<<"young";
    else
        cout<<"not young";
    //output must be all in lower case
}


int main()
{
    int a;
    cout<<"Enter an age\n";
    cin>>a;
    CheckAge(a);

    return 0;
}
