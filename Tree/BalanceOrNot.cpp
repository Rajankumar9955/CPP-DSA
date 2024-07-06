#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    class node *l, *r;
    node(int d)
    {
        data=d;
        l=NULL;
        r=NULL;
    }
};
int height(node *n)
{
    if(n==NULL)
    {
        return 0;
    }
    int left=height(n->l);
    int right=height(n->r);
    int result=max(left,right)+1;
    return result;
}
bool isbal(node *n)
{
    if(n==NULL)
    {
        return true;
    }
    bool lf=isbal(n->l);
    bool rgt=isbal(n->r);
    bool ans=abs(height(n->l)-height(n->r))<=1;
    if(lf && rgt && ans)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    node *root = NULL;
    root =new node(5);
    root->l=new node(2);
    root->l->r=new node(3);
    root->r=new node(8);
    root->r->r=new node(11);
    root->r->r->r=new node(1);
    bool c=isbal(root);
    if(c)
    {
        cout<<"Tree is balance";
    }
    else
    {
        cout<<"Tree is note balance";
    }
}