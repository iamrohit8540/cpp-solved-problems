#include<bits/stdc++.h>
using namespace std;

class base 
{
    int a;
    public:
    int b,c;
    void setdata(int,int,int);
    void getdata();
    base()
    {
        cout<<"Default constructor for base class invoked."<<endl;
    }
};

class derived : private base
{
    public:
    int d;
    void process();
    void display();
    derived()
    {
        cout<<"Default constructor for derived class invoked."<<endl;
    }

};

void base :: setdata(int p,int q,int r)
{
    a=p;
    b=q;
    c=r;

}
void base :: getdata()
{
    cout<<"Values are "<<a<<" "<<b<<" and "<<c<<endl;
}
void derived :: process()
{
    setdata(1,2,3);
    getdata();
    d= b*c;

    
     
}
void derived :: display()
{
    cout<<"Value is "<<d<<endl;
}
int main()
{
    derived i;
    // i.setdata(1,2,3);
    // i.getdata();
    i.process();
    i.display();
    // cout<<i.a<<endl; it will throw error because variable a is a private member of base class cant be inherited; security level c++


    return 0;
}