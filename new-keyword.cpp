#include<bits/stdc++.h>
using namespace std;

int main()
{
    float *f = new float(9.5);
    int *p = new int(6);
    int *arr = new int[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    cout<<"Value at p is "<<*(p)<<endl;
    cout<<"Value at f is "<<*(f)<<endl;
    cout<<"Value at arr[0] is "<<arr[0]<<endl;
    cout<<"Value at arr[1] is "<<arr[1]<<endl;
    cout<<"Value at arr[2] is "<<arr[2]<<endl;
    cout<<"Value at arr[3] is "<<arr[3]<<endl;
    cout<<"Value at arr[4] is "<<arr[4]<<endl;
    

    return 0;
}