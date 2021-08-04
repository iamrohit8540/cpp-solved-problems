#include<bits/stdc++.h>
using namespace std;

class Animals 
{
    // private:
    public:
    int c,d;
    int a,b;
    Animals(){}
    void setdata(int a1,int b1)
    {
        c=a1;
        d=b1;
    }
    void getdata()
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}
};

class Dog : public Animals
{
    public:
    string name,food;
    Dog(){}
    Dog(string n,string f)
    {
        name = n;
        food = f;
    }
    void getData()
{
    cout<<"Name of the dog is "<<name<<endl;
    cout<<"He eats "<<food<<endl;
    
}

};
int main()
{
    // string n1="pug",f1="chicken";
    Dog a("pug","chicken");
    a.getData(); 
    Dog b1;
    b1.setdata(5,7);
    b1.a=1;
    b1.b=2;
    
    b1.getdata();

    return 0;
}