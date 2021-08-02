#include <bits/stdc++.h>
using namespace std;

class company;
class cal;

class cal{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumcal(company ,company);
        
    

};

class company
{
    int a,b;
    friend int cal :: sumcal(company o1,company o2);
    public: 
    void setdata(int a1,int a2){
        a= a1;
        b= a2;
    }
    void getdata()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
int cal :: sumcal(company o1, company o2){
    return (o1.a+o2.a);
}

int main()
{
    company o1,o2;
    o1.setdata(6,8);
    o2.setdata(9,7);
    cal c;
    cout<<c.sumcal(o1,o2);
    return 0;
}