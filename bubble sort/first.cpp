//  #include<iostream>
//  using namespace std;
//  int main()
// {
//  int a[]={1,235,62,53,42,15};
//  int s;
//  int tmp;
//  int c;
//  s=sizeof(a)/sizeof(a[0]);
//  cout<<"\narray\n";
//  for(int j=0; j<s; ++j)
//  {
//     cout<<a[j]<<"\t";
//  }
//  for(int i=0; i<s; ++i)
//  {
//     c=0;
//     for(int j=0; j<s-i-1; ++j)
//     {
//         if(a[j]>a[j+1])
//         {
//             tmp=a[j];
//             a[j]=a[j+1];
//             a[j+1]=tmp;
//             c++;
//         }
//     }
//     if(i!=s-1 && c==0)
//     {
//         cout<<"\nArray sorted during runtime\n";
//     }
//  }
// cout<<"\nafter applying bubble sort\n";
// for(int j=0; j<s; ++j)
// {
//     cout<<a[j]<<"\t";
// }
// }

// =================================================================================================

#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,35,42,56,325,751,284,2,3,64,1,856,1200};
    int s;
    int temp;
    int c=0;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nArray\n";
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
    for(int j=0; j<s; ++j)
    {
        for(int i=0; i<s-i-1; ++i)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                c++;
            }
        }
        if(j!=s-1 && c==0)
        {
            cout<<"\nTHIS IS SORTED DURING RUNTIME\n";
        }
    }
    cout<<"\nAfter applying bublle sort\n";
    for(int i=0; i<s; ++i)
    {
        cout<<arr[i]<<"\t";
    }
}