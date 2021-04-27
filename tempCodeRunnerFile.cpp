#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter any character: ";
    cin>>c;

    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        cout<<c<<" is a character.";

    }    
    else if(c>='0'&&c<='9')
    {
        cout<<c<<" is a digit";
    }
    else
    {
        cout<<c<<" is a special charecter";
    }
    return 0;
}