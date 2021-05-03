#include<bits/stdc++.h> //programm to find max value and min value in an array
using namespace std;

int main()
{
    int ar[50],min=INT_MAX,max=INT_MIN,n;

    cout<<"Enter total number of Elements: ";
    cin>>n;
    cout<<"Enter the elements of the array\n";

    for (int i = 0; i < n; i++)
    {
        cout<<"Element "<<i<<": ";
        cin>>ar[i];

        if(ar[i]<min)
        {
            min=ar[i];
        }

        if(ar[i]>max)
        {
            max=ar[i];
        }
    }

    cout<<"Min value is "<<min<<endl<<"Max value is "<<max;

    return 0;
}