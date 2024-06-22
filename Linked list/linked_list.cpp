#include<iostream>
using namespace std;
class node{
    public:int data;
    class node *nxt;
    node(int d)
    {
        data=d;
        nxt=NULL;

    }
};
void add (node *&h, int v)
{
    node *tmp=new node(v);
    tmp->nxt=h;
    h=tmp;
}
void display(node *h)
{
    node *tmp=h;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<"->";
        tmp=tmp->nxt;
    }
    cout<<"NULL";
}
int srch(node *h ,int k)
{
    node *tmp=h;
    while(tmp!=NULL){
        if(tmp->data==k)
        {
            return 1;
            break;
        }
        tmp=tmp->nxt;
    }
    return 0;
}
int main()
{
    node *h=NULL;
    add(h,2);
    add(h,9);
    add(h,7);
    add(h,4);
    int c;
    c=srch(h,7);
    if(c==1)
    {
        cout<<"found";
    }
    else
    {
        cout<<"Not Found";
    }
}