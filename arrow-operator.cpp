#include<bits/stdc++.h>
using namespace std;

class base
{
    protected:
    int good,bad;
    public:
    void setdata(int x,int y)
    {
        good = x;
        bad = y;
    }
    void getdata()
    {
        cout<<"Good data is "<<good<<endl;
        cout<<"Bad data is "<<bad<<endl;
    }

};
int main()
{
    base a;
    base *ptr = &a;
    

    (*ptr).setdata(5,6);
    (*ptr).getdata();
    ptr->setdata(99,98);
    ptr->getdata();
    a.setdata(100,69);
    a.getdata();

    return 0;
}