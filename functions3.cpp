#include<bits/stdc++.h> //for prime numbers.
using namespace std;

int prime(int x)
{
    int a=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            a=0;
            break;
        }
        else
        {
            a=1;
        }
        
    }
    return a;
    

}


int main()
{
    int x,a=0;

    cout<<"Enter a number: ";
    cin>>x;

  
    if(prime(x)==1)
    {
        cout<<"The number is Prime";
    }
    else
    {
        cout<<"The number is composite";
    }

    return 0;
}