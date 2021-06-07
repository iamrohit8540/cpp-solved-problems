#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[40],str2[40];

    cout<<"Enter the string:";
    scanf("%[^\n]s",str2); //for multiple words. Not working in cin function.
    // cin>>str(^\n); failed
    cout<<str2<<endl;

    cout<<"Enter string:";
    cin>>str; // works in both functions
    cout<<str<<endl;


    return 0;
}