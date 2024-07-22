#include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int arr[100];
    public:
    Stack(){
        top=-1;
    }
    void push(int x)
    {
        if(top>=99)
        {
            cout<<"Stack overflow"<<endl;
        }
        arr[++top]=x;
        cout<<"pushed:"<<x<<"to stack\n";
    }
    int pop()
    {
        if(top<0)
        {
            cout<<"Stack undeflow"<<endl;
            return 0;
        }
        return arr[top--];
    }
}
int main()
{
    Stack s;
    s.push(50);
    s.push(40);
    s.push(30);
    
}