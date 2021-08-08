#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    void greet()
    {
        cout<<"hello"<<endl;
    }
};

class derived: public base
{
    public:
    void greet()  //this function will be overwritten after creation of the object of derived class
    {
        cout<<"Namaste"<<endl;
    }
};

int main()
{
    derived a;
    a.greet(); //here greet of derived class will be invoked
    base b;
    b.greet(); //here greet of base class will be invoked

    return 0;
}