#include<bits/stdc++.h>
using namespace std;


int main()
{
    int s1=0,s2=1,n,s3;
    cin>>n;
    cout<<"0,1";
    for (int i = 1; i <n-1;i++)
    {
        s3=s2+s1;
        cout<<","<<s3;
        s1=s2;
        s2=s3;
    }
    
    

    return 0;   
}