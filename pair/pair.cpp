#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,string>>v;
    int r,roll;
    string name;
    cout<<"Enter the how many records\n";
    cin>>r;
    for(int i=0; i<r; ++i)
    {
        cout<<"enter the roll\n";
        cin>>roll;
        cout<<"Enter the name\n";
        cin>>name;
        v.push_back(make_pair(roll,name));
        //v.push_back({roll,name});
    }
    cout<<"display the data\n";
    for(auto p:v)
    {
        cout<<"Roll:"<<p.first<<"\t"<<"Name:"<<p.second<<"\n";
    }
}