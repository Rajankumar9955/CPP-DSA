#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v{1,2,3,4,5,6,8};
    int r;
    r = v.size();
    int l=0;
    int sum=0;
    int target;
    cout<<"Enter the target elements:";
    cin>>target;
    while(l<r)
    {
        sum=v[l]+v[r];
        if(sum==target)
        {
            cout<<"["<<l<<","<<r<<"]";
            break;
        }
        else if(sum<target)
        {
            l++;
        }
        else if(sum>target)
        {
            r--;
        }
    }
    
}