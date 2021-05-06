#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int* c=&a,*d=&b;
    int sum=0;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    sum=*c+*d;
    cout<<endl<<sum;



    return 0;
}
