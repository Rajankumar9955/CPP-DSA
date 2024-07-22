#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v{0,2,3,4,5,6,7};
    int n=v.size();
    int s=0;
    int sum=n*(n+1)/2;
    for(int i=0; i<v.size(); ++i)
    {
       s+=v[i];
    }
    cout<<sum-s;
}