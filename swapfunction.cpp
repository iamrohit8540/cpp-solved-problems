#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp=0;
    temp = a;
    a = b;
    b = temp;
    cout<<"swapped"<<endl<<a<<endl<<b<<endl<<"swapped"<<endl;

}
int main()
{
    int x=4,y=5;
    cout<<x<<endl<<y<<endl;
    swap(x,y);
    cout<<x<<endl<<y<<endl;


    return 0;
}