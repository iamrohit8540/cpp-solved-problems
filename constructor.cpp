#include<bits/stdc++.h>
using namespace std;

class rohit;

class rohit
{
    int a,b;
    public:
    rohit(); //declaration of constructors;must be same name as of class
    void getdata(){
        cout<<"Data values are "<<a<<" and "<<b<<endl;
    }

};
rohit :: rohit() //defining constructor;it will run automatically after creation of objects
{
    cout<<"Constructor created successfully."<<endl;
    cout<<"Enter your values: ";
    cin>>a>>b;
}
int main()
{
    rohit a,b;
    a.getdata();
    b.getdata();

    return 0;
}