#include<bits/stdc++.h>
using namespace std;

int counter=0; //the name 'count' not working here I dont know why;working well in harry's code 

class number{

    
    public:
    number(){
        counter++;
        cout<<"Default constructor called for object "<<counter<<endl;
    }
    ~number(){
        cout<<"Destructor called for object "<<counter<<endl; //destructor will be called when code destroys any object of particular class
        counter--;
    }

};
int main()
{
    number a;
    {
        cout<<"Entering block."<<endl;
        number b; //this object will be desroyed after exiting this block;smartness level c++
        cout<<"Exiting block."<<endl;
    }
    cout<<"Back to main."<<endl;

    return 0;
}