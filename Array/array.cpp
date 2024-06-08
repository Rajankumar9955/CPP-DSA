#include<iostream>
using namespace std;
#include<array>
//Array is called a sequence container & it's is static
int main()
{
    array<float,3>a={2.5,4.7,5};
    array<float,3>b={3.2,2.1,7};
    cout<<a.size()<<"\n";
    for(int i=0; i<a.size; i++)
    {
        cout<<a[i]<<"\n";
    }
    cout<<"new\n";
    for(auto k:a)
    {
        cout<<l<<"\n";
    }
    cout<<a.front()<<"\n";
    cout<<a.back()<<"\n";
    a.swap(b);
    cout<<"Data of a\n";
    for(auto k:a)
    {
        cout<<k<<"\n";
    }
    cout<<"\n";
    a.fill();
    cout<<"After fill\n";
    for(auto k:a)
    {
        cout<<k<<"\n";
    }
}