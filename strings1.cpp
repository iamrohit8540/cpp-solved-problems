#include<bits/stdc++.h> //length of string.
using namespace std;

int main()
{
    int n;
    char str[50];

    cout<<"Enter a string: ";
    cin>>str;
    for(n=0;str[n]!='\0';)
    {
        n++;
    }
    cout<<"Length of the string is "<<n;

    // cout<<str[0]<<endl<<str[1];
     
    return 0;
}