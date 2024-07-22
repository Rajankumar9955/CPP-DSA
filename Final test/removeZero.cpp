#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{0,1,2,3,45,6};
    vector<int>b;
    int n=v.size();
    int c=0;
    for(int i=0; i<v.size(); ++i)
    {
        if(v[i]!=0)
        {
            b[c]=v[i];
            c++;
        }
    }
    while(c<v.size())
    {
        b[c]=0;
        c++;
    }
    for(auto p:b)
    {
        cout<<p<<"\t";
    }
}