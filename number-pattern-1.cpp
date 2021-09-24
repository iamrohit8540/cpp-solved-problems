#include<bits/stdc++.h> //triangular number pattern
using namespace std;

int main()
{
    int a;

    cout<<"Enter no. of rows: ";
    cin>>a;

    for(int i=1;i<=a;i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}