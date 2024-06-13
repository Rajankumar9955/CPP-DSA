#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={12,5,2,35,85,-4,8,5,25,-35,26,34,35,96};
    cout<<count(v.begin(),v.end(),4)<<"\n";
    cout<<min_element(v.begin(),v.end())-v.begin()<<"\n";
    cout<<max_element(v.begin(),v.end())-v.begin()<<"\n";
    cout<<*min_element(v.begin(),v.end())<<"\n";
    cout<<*max_element(v.begin(),v.end());


}