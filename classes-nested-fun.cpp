#include <bits/stdc++.h>
using namespace std;

class bin
{
private:
    string s;
    void chk_bin(); // we cant access this directly from main

public:
    void read();
    void ones();
    void display();
};
void bin :: read()
{
    cout << "Enter a binary nuber: ";
    cin >> s;
    chk_bin();
}
void bin :: chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect binary";
            exit(0);
        }
        
    }
}

void bin :: ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
    }
    
}
void bin :: display()
{
    cout<<s<<endl;
}
int main()
{
    bin a;
    a.read();
    // a.chk_bin(); throws error; should be called from inside of a member funcion
    a.display();
    a.ones();
    a.display();

    return 0;
}