#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"1st number is: "<<a<<endl;
    cout<<"2nd number is: "<<b<<endl;
    cout<<"3nd number is: "<<c<<endl;
    if (a>=b&&a>=c)
    {
        cout<<a<<" is greater"<<endl;
    }
    else if(b>=c&&b>=a)
    {
        cout<<b<<" is greater";
    }
    else
    {
        cout<<c<<" is greater";
    }
    
    
    
    
    
    return 0;
}