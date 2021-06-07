#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=7,x=6;
    int &b=a; //reference variable 
    int y=x; //normal vriable

    a++;
    x++;
    
    cout<<a<<endl<<b<<endl;
    cout<<x<<endl<<y<<endl;

    return 0;
}