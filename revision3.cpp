#include<bits/stdc++.h> // hollow rectangle star pattern
using namespace std;

int main()
{
    int n,m;

    cout<<"Enter dimensions: ";
    cin>>n>>m;

    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i==1||i==n||j==1||j==m)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        
        cout<<endl;
    }
    

    return 0;
}