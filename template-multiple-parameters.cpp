#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2>
class pzclass{
    public:
    T1 d1;
    T2 d2;
    pzclass(){}
    pzclass(T1 a,T2 b)
    {
        d1=a;
        d2=b;
        cout<<"constructor invoked."<<endl;
    }



};
int main()
{
    pzclass<char,float> o1('R',6.4);

    pzclass<string,string> o2("RO","UNDERHOOD");
    cout<<o2.d1<<endl<<o2.d2<<endl;
    cout<<o1.d1<<endl<<o1.d2<<endl;
    

    return 0;
}