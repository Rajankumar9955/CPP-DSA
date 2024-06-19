#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    string s="";
    int n,d;
    cout<<"Enter How many elements\n";
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>d;
        st.push(d);
    }
    cout<<"Output\n";
    while(!st.empty())
    {
        s=s+to_string(st.top());
        st.pop();
    }
    cout<<"String:"<<s;
//     cout<<"Reverse order\n";
   
//    while(!s.empty())
//    {
//     cout<<s.top()<<"\n";
//     s.pop;
//    }

}