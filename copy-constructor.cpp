#include<bits/stdc++.h>
using namespace std;

class number{
    int a;
    public:
    number(){
        a = 0;
        cout<<"Default constructor called."<<endl;
    }
    number(int x){
        cout<<"Parametrized constructor called."<<endl;
        a = x;

    }
    number(number &y)
    {
        cout<<"Copy constructor called."<<endl;
        a = y.a;
    }
    void show()
    {
        cout<<a<<endl;
    }


};
int main()
{
    number p(6);
    p.show();

    number q(p);
    q.show();

    number r;
    r.show();

    return 0;
}