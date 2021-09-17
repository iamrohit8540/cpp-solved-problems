#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ro;
    ofstream rout("sample1.txt");

    cout<<"Enter your name: ";
    cin>>ro;

    rout<<" The name is " + ro;
    rout.close();

    ifstream rin("sample1.txt");
    string hood;

    rin>>hood;
    getline(rin,hood);

    cout<<"The file text is "<<hood;


    return 0;
}