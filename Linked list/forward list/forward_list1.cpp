#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>f1;
    int n,x;
    cout<<"how many records \n";
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cout<<"enter value\n";
        cin>>x;
        f1.push_front(x);
    }
    for(auto p:f1)
    {
        cout<<p<<"\n";
    }
}