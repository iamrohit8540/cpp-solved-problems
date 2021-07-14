#include <bits/stdc++.h> // checking prime number
using namespace std;

int i;
int prime(int);

int main()
{
    int n, primeNo;
    cout << "Enter the number:";
    cin >> n;

    i = n / 2;
    primeNo = prime(n);

    if (primeNo == 1)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Composite";
    }

    return 0;
}
int prime(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if (i == 1)
    {
        return 1;
    }
    else if (n % i == 0)

    {
        return 0;
    }
    else
    {
        i = i - 1;
        prime(n);
    }
}
