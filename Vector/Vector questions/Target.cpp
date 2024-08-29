// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {
//    vector<int>v{9,3,2,5,1};
//    sort(v.begin(),v.end());
//    int target=8;
//    int l=0;
//    int r=v.size()-1;
//    int sum=0;
//    while(l<r)
//    {
//     sum=v[l]+v[r];
//     if(sum==target)
//     {
//         cout<<"True";
//         break;
//     }
//     else if(sum<target)
//     {
//         l++;
//     }
//     else if(sum>target)
//     {
//         r--;
//     }
//    }
// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,6,4,8,9};
    sort(v.begin(),v.end());
    cout<<"Enter the target Elements:";
    int target;
    cin>>target;
    int l=0; 
    int r=v.size()-1;
    int sum=0;
    while(l<r)
    {
        sum=v[l]+v[r];
        if(sum==target)
        {
            cout<<"Found";
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





















