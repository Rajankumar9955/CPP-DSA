#include<iostream>
using namespace std;
class node{
    public: int data;
    class node *l,*r;
    node(int d){
        data=d;
        l=NULL;
        r=NULL;
    }
};


node *bst(node *root,int v)
{
    if(root==NULL)
    {
        return new node(v);
    }
    if(v<root->data)
    {
        root->l=bst(root->l,v);
    }
    else if(v>root->data)
    {
        root->r=bst(root->r,v);
    }
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->l);
    cout<<root->data<<"\t";
    inorder(root->r);
}
int main()
{
    node *root=NULL;
    root=bst(root,50);
    root=bst(root,80);
    root=bst(root,50);
    root=bst(root,55);
    root=bst(root,18);
    root=bst(root,8);
    inorder(root);
}