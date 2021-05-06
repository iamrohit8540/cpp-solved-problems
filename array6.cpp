//gives unique numbers from the array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar1[50], ar2[50], ar3[50], n, i, j, d;

    cout << "Enter total number of Elements: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Element " << i << ": ";
        cin >> ar1[i];
    }
    for (j = 0; j < n; j++)
    {
        ar2[j] = ar1[j];
        
    }
     

    for (i = 0; i < n; i++)
    {
        d=0;
        for (j = 0; j < n; j++)
        {
            if(i!=j)
            {
                if(ar1[i]==ar2[j])
                {
                    d++;
                }
            }
        }
        if(d==0)
        {
            cout<<ar1[i]<<endl;
        }
    }
    
}
