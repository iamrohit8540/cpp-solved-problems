#include<bits/stdc++.h>
using namespace std;

int main()
{
    int* ptr;
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    ptr = (int*) calloc(n,sizeof(int));//syntax of calloc

    for (int i = 0; i < n; i++)
    {
        cout<<"The value no. "<<i<<" of the dynamic array is "<<ptr[i]<<endl; //values are allocated with 0
    }

    cout<<"Enter the new size: ";
    cin>>n;

    ptr = (int*) realloc (ptr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<"The value no. "<<i<<" of the dynamic array is "<<ptr[i]<<endl; //values are allocated with garbage
    }

    return 0;
}