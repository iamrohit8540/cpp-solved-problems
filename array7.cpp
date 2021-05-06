#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[50],odd[50],even[50],n,j=0,k=0;

    cout<<"Enter the total number of elements in the array: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i<<": ";
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2 == 0)
        {
            even[j]=ar[i];
            j++;
        }
        else
        {
            odd[k]=ar[i];
            k++;
        }
    }
    cout<<"Even numbers are: ";
    for(int i=0;i<j;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nOdd numbers are: ";
    for(int i=0;i<k;i++)
    {
        cout<<odd[i]<<" ";
    }
    return 0;
}
