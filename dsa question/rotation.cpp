
// =======================Static program===============================
// #include<iostream>
// using namespace std;
// #include<array>

// int main()
// {   array<int,5>arr={1,2,3,4,5};
//     array<int,5>tmp;
//     int st=1;
//     int n=arr.size();
//     for(int i=0; i<n; ++i)
//     {
//         tmp[(i+st)%n]=arr[i];
//     }
//     for(auto p:tmp)
//     {
//         cout<<p<<"\t";
//     }
// }

//============================Dymanically program=======================


#include<iostream>
#include<array>
using namespace std;
int main()
{
    cout<<"Your Array like That:[1,2,3,4,5]";
    cout<<"\nEnter Your Step:";
    int st;
    cin>>st;
    array<int,5>a={1,2,3,4,5};
    array<int,5>temp;
    int n=a.size();
    if(st<=n)
    {
        for(int i=0; i<a.size(); ++i)
        {
            temp[(i+st)%n]=a[i];
        }
        for(auto p:temp)
        {
            cout<<p<<"\t";
        }
    }
}

