#include<bits/stdc++.h>
using namespace std;

class student
{
    protected:
    int roll;
    public:
    void set_roll(int);
    void get_roll();
    student(){}
};
class exam: public student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float,float);
    void get_marks();
    exam(){}
};
class result: public exam
{
    public:
    float percentage;
    result(int r,float m,float p)
    {
        roll=r;
        maths=m;
        physics=p;
        set_roll(r);
        get_roll();
        set_marks(m,p);
        get_marks();
        percentage = (m+p)/2;
        cout<<"Your result is "<<percentage<<"%"<<endl;

    }
};
void student :: set_roll(int r)
{
    roll=r;
}
void student :: get_roll()
{
    cout<<"Your roll no. is "<<roll<<endl;
}
void exam :: set_marks(float m,float p)
{
    maths = m;
    physics = p;
}
void exam :: get_marks()
{
    cout<<"Your marks in maths and physics are "<<maths<<" and "<<physics<<endl;
}

int main()
{
    result rohit(54,78,63);

    return 0;
}