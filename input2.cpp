#include<iostream>  /*C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.*/
using namespace std;

int main()
{
    int a,b,sum;

    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    if(a==b)
    {
        sum=3*(a+b);
        cout<<sum;
    }
    else
    {
        sum=a+b;
        cout<<sum;
    }

    return 0;
}