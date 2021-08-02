#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter rows: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int spc=1; spc<=(n-i); spc++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

                 /* 
                * * 
              * * * 
            * * * * 
          * * * * * 
        * * * * * * 
      * * * * * * *
    * * * * * * * *
  * * * * * * * * *
* * * * * * * * * */