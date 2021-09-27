#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={73,83,69,10,29};

    sort(arr,arr+5);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}