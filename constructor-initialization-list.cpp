#include<bits/stdc++.h>
using namespace std;

class base
{
    int a,b;
    public:
    base(){}
    // base(int i, int j) : a(i), b(j)
    // base(int i, int j) : a(i), b(i+j)
    // base(int i, int j) : a(i), b(2 * j)
    // base(int i, int j) : a(i), b(a + j)
    // base(int i, int j) : b(j), a(i+b) //-->RED Flag this will create problems because a will be initialized first
    base(int i,int j): a(i),b(j)
    {
        cout<<"Constructor invoked."<<endl;
        cout<<a<<endl<<b<<endl;
    }
};
int main()
{
    base a1(5,6);
    

    return 0;
}