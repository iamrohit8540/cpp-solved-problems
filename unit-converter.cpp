#include <bits/stdc++.h>
using namespace std;

/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/

int main()
{
    int x;
    float km, mile, inch, foot, cm, pound, kg, meter;

    cout << endl;
    cout << "Welcome to UNIT Converter" << endl;
    cout << "=========================" << endl;
    cout << "1.Kms to Miles" << endl;
    cout << "2.Inches to Foots" << endl;
    cout << "3.Cms to Inches" << endl;
    cout << "4.Pounds to Kgs" << endl;
    cout << "5.Inches to Meters" << endl
         << endl;
    cout << "Enter your Choice:";
    cin >> x;

    switch (x)
    {
    case 1:
    {
        cout << "Enter your value in Kms" << endl;
        cin >> km;
        mile = km * 0.621371;
        cout << mile << " miles";
    }
    break;
    case 2:
    {
        cout << "Enter your value in Inches" << endl;
        cin >> inch;
        foot = inch*0.0833333;
        cout << foot << " foots";
    }
    break;
    case 3:
    {
        cout << "Enter your value in cms" << endl;
        cin >> cm;
        inch = cm * 0.393701;
        cout << inch << " inches";
    }
    break;
    case 4:
    {
        cout << "Enter your value in Pounds" << endl;
        cin >> pound;
        kg = pound * 0.453592;
        cout << kg << " kgs";
    }
    break;
    case 5:
    {
        cout << "Enter your value in Inches" << endl;
        cin >> inch;
        meter = inch * 0.0254;
        cout << meter << " meters";
    }
    break;

    default:

        cout<<"Not a valid input";
        break;
    }

    return 0;
}