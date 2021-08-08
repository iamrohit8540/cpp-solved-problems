#include<bits/stdc++.h>
using namespace std;
class base1{
    protected:
    int i;
    public:
    base1(int a)
    {
        i = a;
        cout<<"base1 constructor called."<<endl;
    }
    void getdata1()
    {
        cout<<"Value in base1 is "<<i<<endl;
    }

};
class base2{
    protected:
    int j;
    public:
    base2(int b)
    {
        j = b;
        cout<<"base2 constructor called."<<endl;
    }
    void getdata2()
    {
        cout<<"Value in base1 is "<<j<<endl;
    }

};
class derived: public base1,public base2  //order matters here
{
    protected:
    int d1,d2;
    public:
    derived(int a,int b,int c,int d): base1(a),base2(b) //but order does not matters here
    {
        d1 = c;
        d2 = d;
        cout<<"Derived class constructor called."<<endl;
    }
    void getdatad()
    {
        cout<<"Value in derived1 is "<<d1<<endl;
        cout<<"Value in derived2 is "<<d2<<endl;
    }
};

int main()
{
    derived rohit(4,5,6,7);

    rohit.getdata1();
    rohit.getdata2();
    rohit.getdatad();

    return 0;
}