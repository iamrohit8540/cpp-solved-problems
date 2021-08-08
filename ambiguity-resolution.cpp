#include<bits/stdc++.h>
using namespace std;

class base1
{
    public:
    void greet()
    {
        cout<<"hello"<<endl;
    }
};
class base2
{
    public:
    void greet()
    {
        cout<<"Namaste"<<endl;
    }
};
class derived: public base1,public base2
{
    public:
    void greet()
    {
        base1 :: greet();
    }
};

int main()
{
    derived a;
    a.greet();

    return 0;
}