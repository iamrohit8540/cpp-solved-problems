#include<bits/stdc++.h>
using namespace std;

int sqr(int); //function must be declared here if you want to define the function anywhere
              //data type as parameter is must but variable is optional fn(int)=must fn(int x)=optional


int main()
{
    int a;

    cout<<"Enter a number: ";
    cin>>a;
    cout<<sqr(a); //function calling.

    return 0;
}

int sqr(int x) //function defining
{
    int y;
    // cout<<"Enter the number: ";
    y=x*x;

    return y;
}