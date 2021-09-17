#include<bits/stdc++.h>
using namespace std;


template<class T>
class Vector{
    public:
    T *arr;
    int size=3;

    Vector()
    {
        
        arr = new T[size];

    }
    T dotproduct(Vector &v)
    {
        T d=0;

        for(int i = 0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }

};
int main()
{
    Vector<float> v1,v2;
    v1.arr[0]=1.4; 
    v1.arr[1]=3.3; 
    v1.arr[2]=0.1; 
    v2.arr[0]=0.1; 
    v2.arr[1]=1.9; 
    v2.arr[2]=4.1; 
    cout<<v1.dotproduct(v2);

    return 0;
}