#include <bits/stdc++.h>
using namespace std;

class company;
class cal;

class cal{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumcal1(company ,company);
    int sumcal2(company ,company);
    
        
    

};

class company
{
    int a,b;
    friend class cal;
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
int cal :: sumcal1(company o1, company o2){
    return (o1.a+o2.a);
}
int cal :: sumcal2(company o1, company o2){
    return (o1.b+o2.b);
}

int main()
{
    company o1,o2;
    o1.setdata(6,4);
    o2.setdata(9,7);
    cal c;
    cout<<c.sumcal1(o1,o2)<<endl;
    cout<<c.sumcal2(o1,o2)<<endl;


    return 0;
}