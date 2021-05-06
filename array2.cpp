#include <bits/stdc++.h> // a program to copy the elements of one array into another array
using namespace std;

int main()
{
    int n, ar1[50], ar2[50], i, j;

    cout << "Enter total number of elements: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> ar1[i];
    }
    for (j = 0; j < n; j++)
    {
        ar2[j] = ar1[j];
    }
    for (int p = 0; p < n; p++)
    {
        cout << "Element of ar1[" << p << "]: " << ar1[p] << endl;
    }
    for (int q = 0; q < n; q++)
    {
        cout << "Element of ar2[" << q << "]: " << ar2[q] << endl;
    }

    return 0;
}