#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum1=0,sum2=1,sum3=0,n;

    cout<<"Enter the number: ";
    cin>>n;

    cout<<"0,1,";
    for (int i = 1; i < n-1; i++)
    {
        sum3=sum2+sum1;
        printf("%d,",sum3);
        sum1=sum2;
        sum2=sum3;
    }
    printf("\b "); //you must enter the value after \b to be shown in output.
    

    return 0;
}