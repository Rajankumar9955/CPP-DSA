#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    stack<int>t2;
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
        t2.push(st.top());
        st.pop();
    }
    cout<<"reverse order\n";
    while(!t2.empty())
    {
        cout<<t2.top()<<"\n";
        t2.pop();
    }
}
