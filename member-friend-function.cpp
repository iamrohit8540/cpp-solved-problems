#include <bits/stdc++.h>
using namespace std;

class com;
class cal;


class cal
{
    int c, d;
    // friend void com ::setdata(int a1, int a2);
    // friend void com ::getdata();

public:
    int sumcal(int , int );
    
};
class com
{
public:
    int a, b;
    friend int cal ::sumcal(int , int );

    void setdata(int a1, int a2)
    {
        a = a1;
        b = a2;
    }
    void getdata()
    {
        cout << "Values are " << a << " and " << b << endl;
    }
};
int cal :: sumcal(int a1, int a2){
    {
        com s;
        c = a1;
        d = a2;
        s.a = c + d;
        return s.a;
    }
}

int main()
{
    com a;
    cal b;
    cout <<"The sum is "<<b.sumcal(4, 5)<<endl;
    a.setdata(4, 5);
    a.getdata();

    return 0;
}