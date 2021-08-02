#include<bits/stdc++.h>
using namespace std;

class company
{
    int a,b;
    friend company sumcomplex(company o1,company o2);
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
company sumcomplex(company o1,company o2){
    company o3;
    o3.setdata((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    company c1,c2,sum;
    c1.setdata(2,5);
    c2.setdata(4,6);
    c1.getdata();
    c2.getdata();

    sum = sumcomplex(c1,c2);
    sum.getdata();
    


    return 0;
}