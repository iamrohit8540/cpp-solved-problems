#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(--n);
        cout<<n<<endl;
        fun(--n);
    }
}
int main()
{
     int a=3;
     fun(a);
 
    return 0;
}
