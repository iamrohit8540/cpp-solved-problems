#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cout << "Enter no. of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        for (int spc = 1; spc <= r - i; spc++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i<<" ";
        }
        for (int spc = 1;spc <= r-i;spc++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}