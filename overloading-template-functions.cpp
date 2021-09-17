#include<bits/stdc++.h>
using namespace std;

void func(int a)
{
    cout<<"Normal function invoked "<<a<<endl;
}
template<class T>
void func(T a)
{
    cout<<"Template function invoked "<<a<<endl;
}
int main()
{
    func(5.1);

    return 0;
}