#include<bits/stdc++.h>
using namespace std;


class Animals 
{
    private:
    int c,d;
    public:
    int a,b;
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


int main()
{
    Animals mine;
    mine.a = 1;
    mine.b = 2;
    mine.setdata(3,4);
    mine.getdata();

    return 0;
}