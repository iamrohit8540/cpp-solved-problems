#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=3;
    int* b=&a;
    int** c=&b;


    cout<<&b<<endl<<*b<<endl<<**c<<endl<<b<<endl<<c;

    return 0;
}