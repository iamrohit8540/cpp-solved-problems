#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, dgt = 0, chr = 0, spc = 0;
    char str[50];

    cout << "Enter a string: ";
    cin >> str;
    for (n = 0; str[n] != '\0';)
    {
        n++;
    }
    // cout << "Length of the string is " << n;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            dgt++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i]>='A' && str[i]<= 'Z'))
        {
            chr++;
        }
        else
        {
            spc++;
        }
        
    }
    cout<<"Number of Alphabets are: "<<chr<<endl;
    cout<<"Number of digits are: "<<dgt<<endl;
    cout<<"Numbers of Special charecters are: "<<spc<<endl;

    return 0;
}