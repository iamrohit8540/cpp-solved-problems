#include<bits/stdc++.h>
using namespace std;

class bankdeposite
{
    int principal,time;
    float IR,RV;
    public:
    bankdeposite(){}
    bankdeposite(int p,int t,float ir);
    bankdeposite(int p,int t,int ir);
    void show();
    

};

bankdeposite :: bankdeposite(int p,int t,float ir)
{
    principal = p;
    time = t;
    IR = ir;
    RV = principal;
    for (int i = 0; i < t; i++)
    {
       RV = RV*(1+IR);
    }
} 
bankdeposite :: bankdeposite(int p,int t,int ir)
{
    principal = p;
    time = t;
    IR = float(ir)/100;
    RV = principal;
    for (int i = 0; i < t; i++)
    {
       RV = RV*(1+IR);
    }
} 
void bankdeposite :: show(){

    cout<<"Principal amount was "<<principal<<"."<<endl
    <<"The return value is "<<RV<<" in "<<time<<" years."<<endl;
}


int main()
{
    
    int p,t,IR;
    float ir;

    cout<<"Enter p ,t and ir: ";
    cin>>p>>t>>ir;

    bankdeposite bd1(p,t,ir);
    
    bd1.show();

    cout<<"Enter p,t and IR: ";
    cin>>p>>t>>IR;
    bankdeposite bd2(p,t,IR);
    bd2.show();
    

    return 0;
}