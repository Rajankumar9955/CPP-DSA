//stack :- open mouth
//uses funtion : push pop  insert delete
//stack LIFO ko follow krta hai last in first out

#include<iostream>
using namespace std;
#define n 5
class stk
{
    public:int *arr;
    int top;
    stk()
    {
        arr=new int[n];
        top=-1; 
    }
    void push(int a)
    {
        if(top==n-1)
        {
            cout<<"overflow\n";
            return ;
        }
        top++;
        arr[top]=a;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"NO element to pop\n";
            return;
        }
        top--;
    }
    int tops()
    {
        if(top==-1)
        {
            cout<<"NO elements\n";
            return -1;
        }
        return arr[top];
    }
};
int main()
{
    stk st;
    st.push(10);
    st.push(23);
    st.push(12);
    st.push(20);
    st.push(100);
    cout<<st.tops()<<"\n";
    st.pop();
    cout<<"top element is ="<<st.tops()<<endl;
    while(st.top!=-1)
    {
        cout<<st.tops()<<"\n";
        st.pop();
    }
    delete[]st.arr;

}