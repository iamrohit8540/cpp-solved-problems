#include <bits/stdc++.h> //convert to binary.
using namespace std;

void convert(int x)
{
    int a = 0, b = 0;
    while (x != 0)
    {

        b = (x % 2);
        cout << b;
        x = (x / 2);
    }
}

int main()
{
    int a;
    cout << "Decimal to Binary" << endl;
    cout << "=================" << endl;
    cout << "\nDecimal: ";
    cin >> a;
    cout << "Binary: ";
    convert(a);

    return 0;
}