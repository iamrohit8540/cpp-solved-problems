#include<bits/stdc++.h>
using namespace std;

class base{
    public: int b;
    virtual void display()
    {
        cout<<"Value of obj-b in base class is "<<b<<endl;
    }
};
class derived : public base{

    public: int d;
    void display()
    {
       cout<<"Value of obj-d in derived class is "<<d<<endl;
       cout<<"Value of obj-b in derived class is "<<b<<endl;
    }
    void new1()
    {
        cout<<"The new function running"<<endl;
    }
};

int main()
{
    base obj_base;
    derived obj_derived;
    base *base_ptr=&obj_derived;
    // base *base_ptr=&obj_base;
    derived *derived_ptr=&obj_derived;



    // base_ptr->new1(); // will not run
    derived_ptr->new1();
    derived_ptr->d=2;
    base_ptr->b=0;
    derived_ptr->b=1;
    base_ptr->display();

    

    // obj_derived.display();
    

    return 0;
}
