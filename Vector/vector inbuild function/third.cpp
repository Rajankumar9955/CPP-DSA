#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>n={2,5,36,7,5};
    for(auto f:n)
    {
        cout<<f<<"\t";
    }
    n.resize(10);  //resize funtion use for resize the array 
    cout<<"\n after resize\n";
    for(auto f:n)
    {
        cout<<f<<"\t";
    }
// =============
    cout<<"\n";
    n.resize(4); //this is also resize if array have alot of value but you want to resize then assign with index value like this
    for(auto f:n)
    {
        cout<<f<<"\t";
    }
}


