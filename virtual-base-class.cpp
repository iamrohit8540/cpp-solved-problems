#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setroll(int r)
    {
        roll = r;
    }
    void getroll()
    {
        cout << "Roll No." << roll << endl;
    }
};
class test : virtual public student
{
protected:
    float che, phy;

public:
    void setmarks(float c, float p)
    {
        che = c;
        phy = p;
    }
    void getmarks()
    {
        cout<<"Marks in Phy and Che are "<<phy<<" and "<<che<<endl;
    }
};
class sports: virtual public student
{
    protected:
    int score;
    public:
    void setscore(int s)
    {
        score = s;

    }
    void getscore()
    {
        cout<<"Score is "<<score<<endl;
    }
};
class result : public test,public sports
{
    protected:
    float res;
    public:
    void display()
    {
        getroll();
        getmarks();
        getscore();

        cout<<"Your total result is "<<(res+score+che+phy)<<endl;

    }
};    


int main()
{
    result rohit;

    rohit.setroll(54);
    rohit.setmarks(63,62);
    rohit.setscore(78);
    rohit.display();

    return 0;
}