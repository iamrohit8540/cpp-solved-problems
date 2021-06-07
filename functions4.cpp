#include<bits/stdc++.h>
using namespace std;

int fact(int);
int main()
{
    int n;

    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial is "<<fact(n);


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