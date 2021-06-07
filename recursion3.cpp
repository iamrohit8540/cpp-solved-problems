#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    
    static int f =1;

    if(n>0)
    {
        f=f*n;
        fact(n-1);
    }
    return f;


}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial is "<<fact(n);
    return 0;
}