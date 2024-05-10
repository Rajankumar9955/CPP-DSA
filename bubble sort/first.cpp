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
    int arr[]={25,36,75,94,6,35,85,65,421,52,46,85,748,546,67852,5647,95762};
    int s,temp,c=0;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nArray\n";
    for(int i=0; i<s; ++i)
    {
        cout<<arr[i]<<"\t";
    }
    for(int j=0; j<s; ++j)
    {
        for(int a=0; a<s-j-1; ++a)
        {
            if(arr[a]>arr[a+1])
            {
              temp=arr[a];
              arr[a]=arr[a+1];
              arr[a+1]=temp;
              c++;
            }
        }
        if(j!=s-1 && c==0)
        {
        cout<<"\nAlready sorted array in runtime\n";
        }
    }
    cout<<"\nAfter applying bubble sort\n";
    for(int i=0; i<s; ++i)
    {
        cout<<arr[i]<<"\t";
    }
}