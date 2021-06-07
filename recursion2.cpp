#include<bits/stdc++.h> //fibonacci series using recursion.
using namespace std;
int fibo(int,int);
int n;
int main()
{
    int num1=0,num2=1;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"\nFibonacci Series\n";
    cout<<"================\n";
    cout<<"1,";
    fibo(num1,num2);
    cout<<"\b \n";


    return 0;
}

int fibo(int num1,int num2)
{
    int num3=1;
    static int i=1;
    if(i==n)
    {
        return 0;
    }
    else
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;
        cout<<num3<<",";
        i++;
        fibo(num1,num2);
    }
    return 0;
}