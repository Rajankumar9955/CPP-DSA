#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,2,3,5};
    int n=a.size();
    int sum=n*(a+1)/2;
    int s=0;
    for(int =0; i<a.size(); ++i)
    {
        s+=a[i];
    }
    cout<<sum-s<<"\t";
}
