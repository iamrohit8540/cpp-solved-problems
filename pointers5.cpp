#include<bits/stdc++.h> //printing alphabets.
using namespace std;

int main()
{
    char alpha[26];
    char* p=alpha;
    int k=0;
cout<<"Enter alphabets: ";

for(int i=0;i<26;i++)
{
    cin>>alpha[i];
}
while (k<26)
{
    cout<<*p<<" ";
    p++;
    k++;
}


    return 0;
}