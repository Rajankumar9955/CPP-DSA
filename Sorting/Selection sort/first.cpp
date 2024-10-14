/*
2 
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={12,35,2,13,20,10,25,6,8,9,74,12};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     int chotu;
//     cout<<"\nArray\n";
//     for(int i=0; i<s; ++i)
//     {
//         cout<<arr[i]<<"\t";
//     }
//     for(int i=0; i<s; ++i)
//     {
      
//     chotu=i;
//     for(int j=i; j<s; ++j)
//     {
//         if(arr[chotu]>arr[j])
//         {
//             chotu=j;
//         }
//     }
//     if(arr[chotu]!=arr[i])
//     {
//         int temp;
//         temp=arr[i];
//         arr[i]=arr[chotu];
//         arr[chotu]=temp;
//     }
//  }
//  cout<<"\nafter applying selection sort\n";
//  for(int i=0; i<s; ++i)
//  {
//     cout<<arr[i]<<"\t";
//  }
// }
//====================================================================================================


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={12,10,21,52,32,41,25,36,41,25,63,52,856,475,689};
//     int s,chotu,temp;
//     s=sizeof(arr)/sizeof(arr[0]);
//     cout<<"\narray\n";
//     for(int i=0; i<s; ++i)
//     {
//         cout<<arr[i]<<"\t";
//     }
//     for(int i=0; i<s; ++i)
//     {
//         chotu=i;
//         for(int j=i; j<s; ++j)
//         {
//            if(arr[chotu]>arr[j])
//            {
//                chotu=j;
//            }
//         }
//         if(arr[chotu]!=arr[i])
//         {
//             temp=arr[i];
//             arr[i]=arr[chotu];
//             arr[chotu]=temp;
//         }
//     }
//     cout<<"\nfter applying selection sort\n";
//     for(int i=0; i<s; ++i)
//     {
//         cout<<arr[i]<<"\t";
//     }
// }
//==================================================================================================


#include<iostream>
using namespace std;
int main()
{
    int arr[]={23,35,62,35,95,65,23,212,52,52};
    int s,temp,chotu;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nbefore sorting\n";
    for(int i=0; i<s;++i)
    {
        cout<<arr[i]<<"\t";
    }
    for(int i=0; i<s; ++i)
    {
        chotu=i;
        for(int j=i; j<s; ++j)
        {
            if(arr[chotu]>arr[j])
            {
                chotu=j;
            }
        }
        if(arr[chotu]!=arr[i])
        {
            temp=arr[i];
            arr[i]=arr[chotu];
            arr[chotu]=temp;
        }
    }
    cout<<"\nAfter applying selection sort\n";
    for(int i=0; i<s; ++i)
    {
        cout<<arr[i]<<"\t";
    }
}