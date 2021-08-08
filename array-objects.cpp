#include<bits/stdc++.h>
using namespace std;
class shop
{
    int id;
    float price;

    public:
    void setid(int i)
    {
        id = i;
    }
    void setprice(int p)
    {
        price = p;
    }
    void getid()
    {
        cout<<"Item id is "<<id<<endl;
    }
    void getprice()
    {
        cout<<"Price is "<<price<<endl;
    }
};
int main()
{
    shop a;
    shop *ptr = new shop[3];
    shop *ptrtemp = ptr;
    int p,i;
    float q;

    for ( i = 0; i < 3; i++)
    {
        cout<<"Enter ID and price of Item "<<(i+1)<<endl;
        cin>>p>>q;
        ptr->setid(p);
        ptr->setprice(q);
        ptr++;
    }

    for ( i = 0; i < 3; i++)
    {
        ptrtemp->getid();
        ptrtemp->getprice();
        ptrtemp++;
    }
    

    return 0;
}