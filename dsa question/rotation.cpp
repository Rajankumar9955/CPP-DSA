
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

// #include<iostream>
// using namespace std;
// #include<array>

// int main()
// {   
//     cout<<"Enter step\n";
//     int st;
//     array<int,5>arr={1,2,3,4,5};
//     array<int,5>tmp;
//     cin>>st;
//     int n=arr.size();
//     if(st<=n)
//     {
    
//       for(int i=0; i<n; ++i){
//            tmp[(i+st)%n]=arr[i];
//         }

//         for(auto p:tmp){
//          cout<<p<<"\t";
//          }
//     }
//     else
//     {
//          cout<<"you have enter the wrong step\n";

//     }
    
// }


//============================
#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5>a={1,2,3,4,5};
    array<int,5>tmp;
    int st;
    int n=a.size();
    cin>>st;
    if(st<=n)
    {
      for(int i=0; i<n; ++i)
      {
          tmp[(i+st)%n]=a[i];
      }
      for(auto k:tmp)
      {
          cout<<k<<"\t";
      }
     }
     else
     {
          cout<<"You have enter wrong step";
     }

}
   

