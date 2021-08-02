#include<bits/stdc++.h>
using namespace std;

class room
{
    friend string mummy();
    string a,b;
    public:
    string c;
    void setdata()
    {
        cout<<"Enter your preferences: ";
        cin>>a>>b;
    }
    void getdata()
    {
        cout<<"Your preference is "<<a<<" and "<<b<<endl;
        cout<<"Mummys preference is "<<c<<endl;
    }
};
string mummy()
{
    room d;
    cout<<"Enter mummy's preference: ";
    cin>>d.c;
    return d.c;
    
}
int main()

{
    room Rohits;
    

    Rohits.setdata();
    
    Rohits.c=mummy();
    Rohits.getdata();



    return 0;
}