#include<bits/stdc++.h>
using namespace std;

int main()
{
    int* ptr;
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    ptr = (int*) malloc(n*sizeof(int));//syntax of malloc

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Enter the value no. "<<i<<" of this dynamic array: ";
    //     // cin>>(&ptr[i]);
    //     scanf("%d",&ptr[i]); //why not working in cin?
    // }
    
    for (int i = 0; i < n; i++)
    {
        cout<<"The value no. "<<i<<" of this dynamic array is :"<<ptr[i]<<endl; // initially allocated with garbage value
    }
    
    // cout<<sizeof(int);

    return 0;
}