#include<iostream>
using namespace std;
#include<array>
//Array is called a sequence container & it's is static
int main()
{
    array<float,3>a={2.5,4.7,5};
    array<float,3>b={3.2,2.1,7};
   cout<<"=======================================================\n"; 
    cout<<"Size:"<<a.size()<<"\n";       //array ki size find krne ke liye use krte hai
   cout<<"==========================================================\n";
    for(int i=0; i<a.size(); i++)  //for loop aaise v use kr sakte hai 
    {
        cout<<a[i]<<"\n";
    }
   cout<<"===================\n";
    cout<<"new\n";
    for(auto k:a)  //for loop aaise v use kr sakte hai or isme data type likhtne ki jarurat nahi hai ye khud le leta hai data type isme 1-1 se increase hoga but decrease nhi hoga
    {
        cout<<k<<"\n";
    }

    cout<<"========================================================\n";
    cout<<"First value of an array:"<<a.front()<<"\n";  //aage ki value ko get krta hai
    cout<<"Back value of an array:"<<a.back()<<"\n";   //back ki value ko get krta hai
    cout<<"=======================================================\n";
    a.swap(b); //Swap basically 2 array ho swap krte hai but 2 array hona compulsary hia
    cout<<"Data of a:\n";
    for(auto k:a)
    {
        cout<<k<<"\n";
    }
    cout<<"====================================\n"; 
    a.fill(0);
    cout<<"After fill\n"; //fill ek particular array ko kisi v value se fill kr sakte hai
    for(auto k:a)
    {
        cout<<k<<"\n";
    }
}