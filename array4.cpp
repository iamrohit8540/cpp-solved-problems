//Fuck this question. //still not right solution.
#include <bits/stdc++.h> //Count a total number of duplicate elements in an array.
using namespace std;

int main()
{
    int ar1[50], ar2[50], ar3[50], n, i, j, d = 0;

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
        for (j = 0; j < n; j++)
        {
            if(i!=j)
            {
                if (ar1[i] == ar2[j])
                {
                    
                    {
                        cout << "ar1[" << i << "]="<<ar1[i]<<endl;
                        d++;
                    }
                
                }
            }
        }
    }
    cout<<d/2<<" number of duplications.";
    return 0;
}
