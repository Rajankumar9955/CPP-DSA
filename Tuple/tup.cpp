#include<iostream>
#include<vector>
using namespace std;
#include<tuple>
int main()
{
    tuple<int,string,int>t{101,"Rajan",21};
    cout<<"ID : "<<get<0>(t)<<"\n";
    cout<<"Name : "<<get<1>(t)<<"\n";
    cout<<"Age : "<<get<2>(t)<<"\n";


//  ==================================using vector=======================
    vector<tuple<int,string,int>>v;
    int n,roll,age;
    string name;
    cout<<"enter the recond\n";
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cout<<"enter the roll number\n";
        cin>>roll;
        cout<<"Enter the name\n";
        cin>>name;
        cout<<"enter the age\n";
        cin>>age;
        v.push_back({roll,name,age});
    }
    for(int i=0; i<n; ++i)
    {
        cout<<"Roll:"<<get<0>(v[i])<<"\t";
        cout<<"  Name:"<<get<1>(v[i])<<"\t";
        cout<<"Age:"<<get<2>(v[i])<<"\n";
    }
}