//divide and conquer
//quick sort coding 
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