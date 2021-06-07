#include <bits/stdc++.h>
using namespace std;

// void stat()
// {
//     static int i = 50;
//     cout<<i<<endl;
// }
// void start()
// {
//     static int i = 60;
//     cout<<i<<endl;
// }
// int main()
// {
//     static int i = 5;

//     // int i = 10; failed

//     // cout<<i;
//     stat();
//     start();

void sum()
{
    int a = 10;
    int b = 24;
    printf("%d %d \n", a, b);
    a++;
    b++;
}
int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        sum(); // The static variables holds their value between multiple function calls.
    }

    return 0;
}