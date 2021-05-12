#include <bits/stdc++.h>
using namespace std;

bool perf(int on)
{
    int sum = 0;
    
    for (int i = 1; i <= on / 2; i++)
    {
        if (on % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == on)
    {
        return true;  //we can return any value in conditional statement.
    }
    return false; //but we must return another value in else case if the if condition do not run.
}
bool arm(int on)
{
    int n, ld, sum = 0;
    
    n = on;
    while (n != 0)
    {
        ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }
    if (sum == on)
    {
        return true;
    }
    return false;
}
int main()
{
    int on;
    cin >> on;

    if (arm(on)) //here function return a boolean value so no need to compare with 0 or 1. 
    {
        cout << "Armstrong.";
    }
    else
    {
        cout << "Not an armstrong.";
    }
    if (perf(on))
    {
        cout << "\nPerfect.";
    }
    else
    {
        cout << "\nNot perfect.";
    }
    return 0;
}