#include<iostream>
using namespace std; /*Write a program in C to calculate and print the Electricity bill of a given customer. 
The customer id., name and unit consumed by the user should be taken from the keyboard and display the total
amount to pay to the customer. */
int main()
{
    int id;
    float cons,a=1.20,b=1.50,c=1.80,d=2.00,bill,net,scharge;
    char name[25];
    cout<<"Enter your ID number: ";
    cin>>id;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter total units consumed: ";
    cin>>cons;
    cout<<"Name: "<<name<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Total units consumed: "<<cons<<endl;

    if(cons<=199)
    {
        bill=cons*a;
        cout<<"Amount charged @"<<a<<" rupees per unit: "<<bill<<" rupees"<<endl;
    }
    else if(cons>=200 && cons<400)
    {
        bill=cons*b;
        cout<<"Amount charged @"<<b<<" rupees per unit: "<<bill<<" rupees"<<endl;
    }
    else if(cons>=400&&cons<600)
    {
        bill=cons*c;
        cout<<"Amount charged @"<<c<<" rupees per unit: "<<bill<<" rupees"<<endl;
    }
    else if(cons>=600)
    {
        bill=cons*d;
        cout<<"Amount charged @"<<d<<" rupees per unit: "<<bill<<" rupees"<<endl;
    }
    if(bill>100&&bill>400)
    {
        scharge=bill*15.00/100.00;
        net=bill+scharge;
    }
    cout<<"Subcharge amount: "<<scharge<<" rupees"<<endl;
    cout<<"Total amount to be paid is "<<net<<" rupees"<<endl;
    return 0;
}