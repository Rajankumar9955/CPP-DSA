#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;
//lamda function:- anamymous class is class lamda function
int show(int a)
{
    return a>3;
}
int main()
{
    cout<<show(5)<<"\n";
    cout<<[](int a){return a>2;}(3)<<"\n";
    cout<<[](int a){return  a++;}(3)<<"\n";



    vector<int>v{10,23,52,42,565,85,21};
    cout<<"Ascending order\n";
    sort(v.begin(),v.end());
    for(auto s:v)
{
    cout<<s<<" ";
}
cout<<"\nDescending order\n";
vector<int>s{10,23,52,42,565,85,21};
    sort(s.begin(),s.end(),[](int a,int b){return a>b;});
    for(auto p:s)
    {
        cout<<p<<"\t";
    }
}