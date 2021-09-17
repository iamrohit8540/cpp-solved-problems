#include<bits/stdc++.h>
using namespace std;

class base{
    public: int b;
    void display()
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
};

int main()
{
    base obj_base;
    derived obj_derived;
    base *base_ptr=&obj_derived;
    // base *base_ptr=&obj_base;
    derived *derived_ptr=&obj_derived;


    base_ptr->b=5;
    base_ptr->display();

    derived_ptr->d=10;
    derived_ptr->display();

    derived_ptr->b=15;
    derived_ptr->display();

    base_ptr->display();
    obj_base.b=1;
    obj_base.display();

    

    // obj_derived.display();
    

    return 0;
}
