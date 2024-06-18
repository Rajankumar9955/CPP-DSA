#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v{9,3,6,5,8};
    sort(v.begin(),v.end());
    int flag=0;
    int target=8;
    int l=0;
    int r=v.size()-1;
    int sum=0;
    while(l<r)
    {
        sum=v[l]+v[r];
        if(sum==target)
        {
            flag++;
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
        if(flag==1)
        {
            cout<<"true";

        }
        else
        {
            cout<<"false";
           
        }

}