#include<iostream>
using namespace std;
#include<list>
#include<forward_list>
int main()
{
    forward_list<int>f2{12,56,35,26,525,42,568,52};
    forward_list<int>f3{12,35,62,42,12,52,35};
    f2.sort();
    f3.sort();
    f2.merge(f3);
    for(auto p:f2)
    {
        cout<<p<<"\t";
    }
    for(auto p:f2)
    {
        cout<<p<<"\t";
    }
    f2.sort();
    cout<<"\nAfter unique\n";
    f2.unique();
    for(auto p:f2)
    {
        cout<<p<<"\t";
    }
}