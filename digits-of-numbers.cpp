#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=586,i;
    cout<<"Enter your number ";
    cin>>a;

    for(i=1;a>1;i++)
    {
        a=a/10;
        cout<<i<<endl;
    }
    cout<<"No. of digits are "<<i;

    return 0;
}