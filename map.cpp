#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, float> result;

    result["Alia"] = 31;
    result["Rohit"] = 95;
    result["Sachin"] = 55;
    result["Ankit"] = 35;

    map<string, float> :: iterator iter;

    iter = result.begin();
    cout<<(*iter).first<<" - ";
    cout<<(*iter).second<<endl;
    iter++;
    cout<<(*iter).first<<" - ";
    cout<<(*iter).second<<endl;
    iter++;
    cout<<(*iter).first<<" - ";
    cout<<(*iter).second<<endl;
    iter++;
    cout<<(*iter).first<<" - ";
    cout<<(*iter).second;
    

    return 0;
}