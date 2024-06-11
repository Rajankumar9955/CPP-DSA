#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4};
    a.push_back(30);
    cout<<"size:"<<a.size()<<"\n";
    cout<<"capacity:"<<a.capacity()<<"\n";
    for(auto p:a)
    {
        cout<<p<<"\n";
    }

}