//insert data in stack
//min value find out

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
     stack<int>st;
     int n,d,mn;
     mn=INT16_MAX;  //if you have to print max the use INT16_MIN or min ke liye INT16_MAX
      cout<<"enter the value of array\n";
     cin>>n;
     for(int i=0; i<n; ++i)
     {
       cout<<"Enter "<<i<<" index Element:";
        cin>>d;
        st.push(d);
     }
     cout<<"output\n";
     while(!st.empty())
     {
        if(mn<st.top())   //if you have to print max the use (mn<st.top) or min ke liye (mn>st.top)
        {
            mn=st.top();
        }
        st.pop();
     }
     cout<<"Min value="<<mn<<"\n";
}