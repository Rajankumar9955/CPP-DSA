//T.C= best=o(nlogn) avg=o(nlogn) burst=o(nlogn)


#include<iostream>
using namespace std;
using namespace std;
void merge(int A[],int low,int mid,int high)
{
    int i,j,k,B[10];
   
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            i++;
        }
        else
        {
            B[k]=A[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        B[k]=A[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        B[k]=A[j];
        k++;
        j++;
    }
    for(i=low; i<=high; ++i)
    {
        A[i]=B[i];
    }
}
void msort(int A[], int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        msort(A,low,mid);
        msort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}
void printarr(int A[],int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        cout<<A[i]<<"\t";
    }
    cout<<"\n";
}
int main()
{
    int A[]={3,25,6,46,2,53,5,42,15,35};
    int n=sizeof(A)/sizeof(A[0]);
    // int n=10;
    printarr(A,n);
    msort(A,0,n-1);
    cout<<"-------------------------------after mergeSort---------------------------------------------";
    printarr(A,n);
}