#include <bits/stdc++.h> //for checking two strings.
using namespace std;

int main()
{
    int m = 0, n = 0, k = 0;
    char str1[50], str2[50];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    while (str1[m] != '\0')
    {
        m++;
    }
    while (str2[n] != '\0')
    {
        n++;
    }
    // cout<<m<<n<<endl;
    if (m == n)
    {
        // cout<<"Please write the code for equal strings.";
        for (int i = 0; i < m; i++)
        {
            if (str1[i] == str2[i])
            {
                k++;
            }
            else
            {
                cout << "strings are not equal.";
                break;
            }
        }
        if (k == m)
        {
            cout << "Strings are equal.";
        }
    }
    else
    {
        cout << "Strings are not equal.";
    }
    return 0;
}