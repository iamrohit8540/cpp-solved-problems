#include<bits/stdc++.h>
using namespace std;

class base{
    int a;
    public:
    base setdata(int a)
    {
        this->a=a; 
        return *this; //we can return the object using this pointer
    }
    void getdata()
    {
        cout<<"Value of object is "<<a<<endl;
    }

};
int main()
{
    base A;

    A.setdata(4).getdata();
    // A.getdata();

    return 0;
}