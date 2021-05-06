#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5]={4,9,23,87,67};
    int* p=ar;

    // cout<<*p<<endl;
    // cout<<*(++p)<<endl;
    // cout<<*(p++)<<endl;
    // cout<<*p<<endl;

    *(p+3)=*(p+4);
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    

    return 0;
}