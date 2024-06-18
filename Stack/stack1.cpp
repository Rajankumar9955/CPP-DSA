#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>stk;
    stk.push(8);
    stk.push(2);
    stk.push(40);
    stk.push(13);
    stk.push(10);
    while(!stk.empty())
    {
        cout<<stk.top()<<"\n";
        stk.pop();
    }
}