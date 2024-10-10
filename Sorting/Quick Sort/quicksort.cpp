//divide and conquer
//quick sort coding 
//time complexity :- best :- o(nlogn)     avg:- O(nlogn)     worst :-  O(n*n)
//space complexity :- o(1) that is constant;  
//inplace/internal :- yes
//stable :- yes 
//quick sort is Elements based 




/*
#include<iostream>
using namespace std;
int part(int *a, int low,int high)
{
    int tmp;
    int pvt=a[low];
    int i=low+1;
    int j=high;
    do 
    {
        while(a[i]<pvt)
        {
          i++;
        }
        while(a[j]>pvt)
        {
            j--;
        }
        if(i<j)
        {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
       while(i<j);
       tmp=a[low];
       a[low]=a[j];
       a[j]=tmp;
       return j;
}
void qs(int *a, int low, int high)
{
    int pv;
    if(low<high){
        pv=part(a,low,high);
        qs(a,low,pv-1);
        qs(a,pv+1,high);
    }
}
void printarr(int *a, int n)
{
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<"\t";
    }
}
int main()
{
    int a[]={8,25,32,12,41,60,5,6,22};
    int n=sizeof(a)/sizeof(a[0]);
    printarr(a,n);
    qs(a,0,n-1);
    cout<<"\nAfter Quick Sort\n";
    printarr(a,n);
} 
*/
//=========================================================================================

#include<iostream>
using namespace std;
int part(int arr[],int low , int high)
{
    int tmp;
    int pvt=arr[low];
    int i=low+1;
    int j=high;
    do
    {
        while(arr[i]<pvt)
        {
            i++;
        }
        while(arr[j]>pvt)
        {
            j--;
        }
        if(i<j)
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
    while(i<j)
    {
        tmp=arr[low];
        arr[low]=arr[high];
        arr[high]=tmp;
        return j;

    }
};
void qs(int arr[], int low , int high)
{
   int pv;
   if(low<high)
   {
    pv=part(arr, low, high);
    qs(arr, low,pv-1);
    qs(arr,pv+1, high);
   }
}
void printar(arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }
}
int main()
{
    int arr[]={12,3,56,42,12,62,12,35,26,42,31,20,10,35,63,25,42,56,85,123,62};
    int n=sizeof(arr)/sizeof(arr[0]);
    printar(arr,n);
    qs(arr,0,n-1);
    cout<<"\nafter quick sort\n";
    printar(arr,n);

}

