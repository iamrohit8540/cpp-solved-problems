#include<bits/stdc++.h>
using namespace std;
void display(list<int> &lst)
{
    list<int> :: iterator it;
    for (it  = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> lst1;
    list<int> lst2;

    lst1.push_back(6);
    lst1.push_back(8);
    lst1.push_back(9);

    list<int> :: iterator iter;
    iter = lst1.begin();

    
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    lst2.push_front(56);
    lst2.push_front(81);
    lst2.push_front(96);
    display(lst1);
    display(lst2);
    // lst2.remove(56);
    lst2.sort();
    display(lst2);
    lst2.merge(lst1);
    display(lst2);
    







    return 0;
}