#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5,6};
    vector<int>b;
    int n=a.size();
    int st=1;
    for(int i=0; i<a.size(); ++i)
    {
         b[(i+st)%n]=a[i];
    }
    for(auto p:b)
    {
        cout<<p<<"\t";
    }

}