#include<bits/stdc++.h>
using namespace std;

class X;
class Y;
class X{
    int data;
    public:
    void setdata(int a)
    {
        data=a;
    }
    void getdata(){
        cout<<"Value is "<<data<<endl;
    }
    friend void sum(X,Y);
};
class Y{
    int data;
    public:
    void setdata(int a)
    {
        data=a;
    }
    void getdata(){
        cout<<"Value is "<<data<<endl;
    }
    friend void sum(X,Y);
};
void sum(X a1,Y a2){
    cout<<"Sum is "<<a1.data+a2.data<<endl;
}


int main()
{
     X a;
     Y b;
     a.setdata(16);
     b.setdata(19);
     a.getdata();
     b.getdata();
     sum(a,b);

    return 0;
}