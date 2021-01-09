#include<iostream>
using namespace std;

void Sign(int n)
{

    //write conditional statement here to print "positive" or "negatuve"
    if(n>0)
    cout<<"positive";
    else if (n<0)
    cout<<"negative";
    else
    cout<<"zer0";
}

int main()
{
    int a;
    cout<<"Enter a number\n";
    cin>>a;
    Sign(a);

    return 0;
}
