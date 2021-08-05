#include<bits/stdc++.h>
using namespace std;

class base1
{
    protected:
    int a;
    public:
    void setdata(int a1)
    {
        a=a1;
    }
    void getdata()
    {
        cout<<"Value is "<<a<<endl;
    }
};
class base2
{
    protected:
    int b;
    public:
    void setdata2(int b1)
    {
        b=b1;
    }
    void getdata2()
    {
        cout<<"Value is "<<b<<endl;
    }
};
class derived: public base1,public base2
{
    protected:
    int c;
    public:
    
    void setdata3(int c1)
    {
        c=c1;
    }
    void getdata3()
    {
        cout<<"Value is "<<c<<endl;
    }
    void sum()
    {
        cout<<"Sum is "<<a+b+c;
    }
    

};
int main()
{
    derived p;
    p.setdata(45);
    p.setdata2(45);
    p.setdata3(45);
    p.getdata();
    p.getdata2();
    p.getdata3();
    p.sum();



    return 0;
}
