#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,c=0;
    cout<<"Enter the number: ";
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        for (int j = 2;j < i; j++)
        {
            if (i % j == 0)
            {
                c=0;
                break;

            }
            
            else
            {
                c=1;
            }
        }
        if (c==1)
        {
            cout<<i<<endl;
        }
        
                
    }
    
    return 0;
}