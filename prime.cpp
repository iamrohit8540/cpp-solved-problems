#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,check=1;
    cout<<"Enter a number: ";
    cin>>n;
    for ( int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            check=0;
        }
    }
    if(check==0)
    {
        cout<<"Composie";
    }
    else
    {
        cout<<"Prime";
    }
    
    return 0;
}