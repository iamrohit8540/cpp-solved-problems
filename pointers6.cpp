#include<bits/stdc++.h>  //to reverse a given string.
using namespace std;

int main()
{
    char nm[50],rev[50];
    int len=0,p,q;

    cout<<"Enter a string: ";
    cin>>nm;
    
    while (nm[len]!='\0')
    {
        len++;
    }

    for (int i = 0; i <= (len-1)/2; i++)
    {
        rev[i]=nm[len-i-1];
        rev[len-i-1]=nm[i];
    }
 
        cout<<"original:";
    for (int i = 0; i < len; i++)
    {    
        cout<<nm[i];
    }
        cout<<"\nReversed:";
    for (int i = 0; i < len; i++)
    {    
        cout<<rev[i];
    }
 
    
    

    
    

    
    
    return 0;
}