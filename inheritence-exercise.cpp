#include <bits/stdc++.h>
using namespace std;

    float p, q;
    void getnumber()
    {
    cout << "Enter numbers: ";
    cin >> p >> q;
    }
class simplecalculator
{
protected:
    float a, b;

public:
    simplecalculator() {}
    float addition()
    {
        return (a+b);
    }
    float substraction()
    {
        return (a-b);
    }
    float division()
    {
        return (a/b);
    }
    float multiplication()
    {
        return (a*b);
    }
};
class scientific_calculator : public simplecalculator
{
public:
    scientific_calculator() {}
};
class hybrid_calculator : public scientific_calculator
{
public:
    hybrid_calculator() {}
    void setdata(float p, float q)
    {
        a = p;
        b = q;
    }
};
int main()
{
    int choice;

    cout << "Welcome to Hybrid Calculator by Underhood" << endl;
    cout << "==================================" << endl;
    cout << "Options" << endl;
    cout << "1.Simple Calculator" << endl;
    cout << "2.Scientific Calculator" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;


    hybrid_calculator a;

    switch (choice)
    {
    case 1:
    {
        int choice2;
        cout << "Welcome to Simple Calculator by Underhood" << endl;
        cout << "==================================" << endl;
        cout << "Options" << endl;
        cout << "1.Addition" << endl;
        cout << "2.Substraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        // cout << "5.Percentage" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice2;

        switch(choice2)
        {
            case 1:
            getnumber();
            a.setdata(p,q);
            cout<<a.addition()<<endl;
            break;
            case 2:
            getnumber();
            a.setdata(p,q);
            cout<<a.substraction()<<endl;
            break;
            case 3:
            getnumber();
            a.setdata(p,q);
            cout<<a.multiplication()<<endl;
            break;            
            case 4:
            getnumber();
            a.setdata(p,q);
            cout<<a.division()<<endl;
            break;

        }
    }
    }

    return 0;
}