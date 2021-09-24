#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1;
    int el,size;
    cout<<"Enter size of the Vector: ";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        cout<<"Enter the element: ";
        cin>>el;
        vec1.push_back(el);
    }
    display(vec1);
    // vec1.pop_back();
    // display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter+3,2,69);
    display(vec1);

    return 0;
}