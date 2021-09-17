#include<bits/stdc++.h>
using namespace std;

class GOT
{
    protected:
    string title;
    float rating;
    public:
    GOT(string t,float r)
    {
        title = t;
        rating =r;
    }
    virtual void display()
    {
        cout<<"Default code"<<endl;
    }
};
class Seasons: public GOT
{
    int seasons;
    public:
    Seasons(string t,float r,int s):GOT(t,r)
    {
        seasons=s;
    }
    void display()
    {
        cout<<"This is an amazing TV series with title "<<title<<"."<<endl;
        cout<<"Ratings: "<<rating<<endl;
        cout<<"No. of seasons: "<<seasons<<endl;
    }
};
class Episodes: public GOT
{
    int ep;
    float eplen;
    public:
    Episodes(string t,float r,int e,float el):GOT(t,r)
    {
        ep=e;
        eplen=el;
    }
    void display()
    {
        cout<<"No. of Episodes per season is "<<ep<<endl;
        cout<<"Length of each episode is "<<eplen<<" min."<<endl;
    }

};
int main()
{
    string title = "Game of Thrones";
    float ratings =9.8;
    float eplen=50.45;
    int seasons=8;
    int ep =10;

    Seasons dragon(title,ratings,seasons);
    Episodes wolf(title,ratings,ep,eplen);
    // latest.display();
    // naya.display();
    GOT* ptr[2];

    ptr[0]=&dragon;
    ptr[1]=&wolf;

    ptr[0]->display();
    ptr[1]->display();




    return 0;
}