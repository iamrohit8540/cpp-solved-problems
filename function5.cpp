#include<bits/stdc++.h>
using namespace std;
int fact(int);

int main()
{
    int n,c,r;
    cout<<"Enter numbers: ";
    cin>>n>>r;
    c = fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr = "<<c;


    return 0;
}

int fact(int n)
{
    int fact=1;
    while ( n > 0)
    {
        fact = fact*n;
        n--;
    }
    return fact;
}