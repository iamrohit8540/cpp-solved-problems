#include<bits/stdc++.h>
using namespace std;

int num(int n,int i)
{
    
    if(i<=n)
    {
        cout<<i<<" ";
        num(n,i+1);

    }

    return 0;
}
int main()
{
    int n,i=1;
    cout<<"Enter the numbers:";
    cin>>n;
    cout<<"\n\n Recursion : Print first 50 natural numbers :\n";
    cout<<"-------------------------------------------------\n"; 
    cout<<" The natural numbers are :";

    num(n,i);

    return 0;
}