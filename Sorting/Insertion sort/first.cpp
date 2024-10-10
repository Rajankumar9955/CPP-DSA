// no of comprison is less in insertion sort (swaping)
//onlice algorithm v kehte hai insertion sort ko
//it is stable
// it is inplace
// s.c o(n*n) 
//substract in conquer



// #include<iostream>
// using namespace std;
// int main(){
//      int n,arr[50],c,min;
//      cout<<"Enter the number of elements :";
//      cin>>n;
//      cout<<"Enter the value of that's elements:";
//      for(c=0; c<n; ++c)
//      {
//          cin>>arr[c];
//      }
//       for(c=1; c<=n-1; ++c)
//       {
//           min=c; //1
//           while(min>0 && arr[min]<arr[min-1])
//           {
//                arr[min]=arr[min]^arr[min-1];
//                arr[min-1]=arr[min]^arr[min-1];
//                arr[min]=arr[min]^arr[min-1];
//                min--;
//           }
//       }
//       cout<<"sorted list in accending order using insertion sort:";
//       for(c=0; c<=n-1; ++c)
//       {
//           cout<<arr[c]<<" ";
//       }
// }

//===========================================================
// #include<iostream>
// using namespace std;
// int main()
// {
//      int n,arr[50],c,min;
//      cout<<"enter the the elements:";
//      cin>>n;
//      cout<<"enter the value of that's the elements:";
//      for(c=0; c<n; c++)
//      {
//           cin>>arr[c];
//      }
//      for(c=1; c<=n-1; c++)
//      {
//           min=c;
//           while(min>0 && arr[min]<arr[min-1])
//           {
//                arr[min]=arr[min]^arr[min-1];
//                arr[min-1]=arr[min]^arr[min-1];
//                arr[min]=arr[min]^arr[min-1];
//                min--;
//           }
//      }
//      cout<<"Sorted list in array using insertion sort:";
//      for(c=0; c<=n-1; c++)
//      {
//           cout<<arr[c]<<" ";
//      }
// }
//========================================================

#include<iostream>
using namespace std;
int main()
{
     int arr[]={2552,3,2,6,58,56,45,12};
     int s,temp=0,c,min;
     s=sizeof(arr)/sizeof(arr[0]);
     for(c=0; c<s; ++c)
     {
          cout<<arr[c]<<"\t";
     }
     for(c=0; c<s-1; ++c)
     {
          min=c;
          while(min>0 && arr[min]<arr[min-1])
          {
             temp=arr[min];
             arr[min]=arr[min-1];
             arr[min-1]=temp;
              min--;
          }
     }
     cout<<"\nusing insertion sort\n";
     for(c=0; c<s-1; ++c)
     {
          cout<<arr[c]<<"\t";
     }
}