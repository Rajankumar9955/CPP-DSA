/*
2 
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,5,1,65,32,4,96,42};
    int temp,s,n=0;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<"\narray\n";
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
                 n++;

            }
        }
    }
    cout<<"\nafter applying selection sort\n";
    for(int r=0; r<s; ++r)
    {
        cout<<arr[r]<<"\t";
    }

}

