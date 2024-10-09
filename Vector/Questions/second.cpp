#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,2,0,3,5,6,4};
    vector<int>b;
    int c=0;
    for(int i=0; i<a.size(); ++i)
    {
        if(a[i]!=0)
        {
            b[c]=a[i];
            c++;
        }
    }
    while(c<a.size())
    {
        b[c]=0;
        c++;
    }
    for(auto p:b)
    {

        cout<<p<<"\t";
    }
    
}