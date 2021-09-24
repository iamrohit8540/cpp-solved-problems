#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a;
    cout<<"Enter the value: ";
    cin>>a;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=a;j++)
        {
            if(a==j||a==i||i==0||j==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}
